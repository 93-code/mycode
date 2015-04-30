/* 11:25 2015-04-30 Thursday */
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <strings.h>
#include <sys/types.h>	       /* See NOTES */
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>

int main(int argc, const char *argv[])
{
    if (argc < 3){
        fprintf(stderr, "Usage : %s <ip> <port>\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    int ret;
    int len;
    int sockfd;
    char packet[1024];

    struct sockaddr_in server_addr;

    //创建客户端套接字
    sockfd = socket(AF_INET, SOCK_STREAM, 0);
    if (-1 == sockfd){
        perror("Fail to socket");
        exit(EXIT_FAILURE);
    }

    //init server_addr
    bzero(&server_addr, sizeof(server_addr));
    server_addr.sin_family = AF_INET;
    server_addr.sin_port   = htons(atoi(argv[2]));
    server_addr.sin_addr.s_addr = inet_addr(argv[1]);

    ret = connect(sockfd, (struct sockaddr *)&server_addr, sizeof(server_addr));
    if (-1 == ret){
        perror("Fail to connect");
        exit(EXIT_FAILURE);
    }

    while (1){
        //fgets
        putchar('>');
        fgets(packet, sizeof(packet), stdin);
        packet[strlen(packet)-1] = '\0';
        //send
        send(sockfd, packet, strlen(packet), 0);
        if (strncmp(packet, "quit", 4) == 0){
            break;
        }
        //recv
        len = recv(sockfd, packet, sizeof(packet), 0);
#ifdef __DEBUG__
        packet[len] = '\0';
        printf("recv packet from server: %s\n", packet);
#endif
    
    }

    close(sockfd);
    return 0;
}
