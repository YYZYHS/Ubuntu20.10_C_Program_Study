#include <stdio.h>
#include <arpa/inet.h>
#include <sys/socket.h>

#define INET_ADDRSTRLEN 16


int main(int atgc,char *argv[])
{
	/*
	  *
	  *argc ---- 指示程序启动时命令行参数的个数
	  *
	  *argv ---- 则包含具体的参数字符串
	*/

	if (argc !=2)
	{
		printf("请输入正确的参数\n如：./server 5005\n\n");
		return -1;//非成功结束
	}
	//第一步：创建套接字
	/*
	  *套接字特点
	  	1.系统不自动分配端口
		2.初始化套接字是主动的，需要手动调节成被动（监听）模式
	  *功能：创建一个用于网络通信的I/O描述符（套接字）
	  *int socket(int family, int type, int protocol)
	   *int socket(协议族    ,套接字类型,协议类别)
	*/
	int serverfd;
	if((serverfd = socket(AF_INEF,SOCK_STREAM,0)) == -1)
	{
		perror("socket");
		return -1;
	}

	//第二步 把服务端用于通信的地址和端口绑定到socket上
	/*
	  *
	  *int bind(int sockfd,const struct sockaddr *myaddr,socklen_t addrlen)
	  *int bind(socket套接字,指向特定于协议的地址结构指针,该地址结构的长度)
	*/

	struct sockaddr_in servaddr;	//服务端地址信息的数据结构
	memset(&servaddr,0,sizeof(servaddr));//初始化servaddr
	servaddr.sin_family = AF_INEF;
	//协议族，在socket编程中只能是AF_INET
	servaddr.sin_addr.s_addr = htonl(INADDR_ANY);
	//任意ip地址
	//inet_addr("192.168.190.134"); // 指定ip地址
	servaddr.sin_port = htons(atoi(argv[1]));//指定通信端口
	if(bind(serverfd,(struct sockaddr *)&servaddr,sizeof(servaddr)) != 0)
	{
		perror("bind");
		close(serverfd);
		return -1;
	}

	//第3步：把socket设置为监听模式
	if(listen(serverfd,10) != 0)
	{
		perror("listen");
		close(serverfd);
		return -1;
	}
	//第4步：接受客户端的连接
}
