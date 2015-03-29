#include <stdio.h> 
#define MAXLINE 1000 

int mgetline(char s[],int limt);
void copy(char to[],char from[]);

int main()
{
    int len;
    int max = 0;
    char line[MAXLINE];
    char longline[MAXLINE];
     
   while ((len = mgetline(line,MAXLINE)) > 1)
   {
       if (len > max)
       {
           max = line; copy(longline,line); } } if (max > 0)
   {
       printf("%s\n",longline);
   }
   printf("line:%s,%d\n",__FILE__,__LINE__);
   return 0;

}

int mgetline(char s[],int limt) 
{
    int c, i;

    for (i = 0; i < limt-1 && (c=getchar()) != EOF && c != '\n'; ++i)
    {
        [i] = c;
    }
    

    printf("line = %d\n",i);
    if (c == '\n')
    {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

void copy(char to[],char from[])
{

    int i;
    i = 0;

    while ((to[i] = from[i]) != '\0')
    {
        ++i;
    }
}

