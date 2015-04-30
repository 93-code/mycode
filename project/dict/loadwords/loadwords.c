/* 09:18 2015-04-30 Thursday */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <sqlite3.h>

void back_move(char *s)
{
    char *p = s + strlen(s);

    while (p != s){
        *(p + 1) = *p;
        p--;
    } 

    // 填充空元素为单引号
    *(p + 1) = *p;
}

void add_quote(char *s)
{
    //字符串尾
    char *p = s + strlen(s);

    while (p != s){
       if (*p == '\''){
           back_move(p);
       }
       p--;
    }
    //第一个处理
    if ('\'' == *s){
        back_move(s);
    }
}

void load_words(sqlite3 *db, FILE *fp)
{

    char *p;
    char *pword, *pexplain;
    int ret = 0;
    int id = 0;
    char buf[1024];
    char sql[1024];
    char *errmsg;
    //fgets:
    while (fgets(buf, sizeof(buf), fp) != NULL){
    //去掉回车换行('\r','\n')
    buf[strlen(buf)-2] = '\0';

#ifdef __DEBUG__
    puts(buf);
#endif// __DEBUG__

    //转义单引号:每个单引号后加一个单引号
    add_quote(buf);
#ifdef __DEBUG__
    puts(buf);
#endif //__DEBUG__

    //分离单词和解释:找到第一个空格
    pword = buf;
    p = buf;
    //找到单词结尾
    while (*p != ' '){
        p++;
    }
    *p ='\0'; 

    p += 1;
    //跳过空格,找到单词解释
    while (*p == ' '){
        p++;
    }
    pexplain = p;

#ifdef __DEBUG__
    puts(pword);
    puts(pexplain);
#endif //__DEBUG__

    //插入单词和解释到数据库
    sprintf(sql, "insert into words values(%d, '%s', '%s')", id++, pword, pexplain);
    ret = sqlite3_exec(db, sql, NULL, NULL, &errmsg);
    if (ret != SQLITE_OK){
        fprintf(stderr, "Fail to sqlite3_exec : %s\n", errmsg);
        break;
    }

    }
}
// ./loadwords dict.db dict.txt
int main(int argc, const char *argv[])
{
    int ret = 0;
    sqlite3 *db;
    FILE *fp;

    if (argc < 3){
        fprintf(stderr, "Usage : %s <db> <dict>\n", argv[0]);
        ret = EXIT_FAILURE;
        goto exit;
    }

    ret = sqlite3_open(argv[1], &db);
    if (ret != SQLITE_OK){
        //不是系统调用错误
        fprintf(stderr, "Sqlite database open %s fail : %s\n", argv[1], sqlite3_errmsg(db));
        ret = EXIT_FAILURE;
        goto exit;
    }

    //open dict.txt
    fp = fopen(argv[2], "r");
    if (NULL == fp){
        perror("Fail to fopen");
        ret = EXIT_FAILURE;
        goto exit;
    }

    load_words(db, fp);
exit:
    fclose(fp);
    sqlite3_close(db);
    return ret;
}

