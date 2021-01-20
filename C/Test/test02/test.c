/*
  *代码作用：确定主机字节序程序 
*/
#include <stdio.h>
#include <arpa/inet.h>
int main(int argc, char *argv[])
{
	int a = 0x01020304;
	short int b = 0x0102;
	union
	{
		short s;
		char c[sizeof(short)];
	}un;

	un.s = 0x0102;

	if( (un.c[0] == 1)&& (un.c[1] == 2))
	{
		printf("big-endian\n");
	}
	else if((un.c[0] == 2) && (un.c[1] == 1))
	{
		printf("little-endian\n");
	}
	printf("htonl(%08x) = %08x\n",a,htonl(a));
	printf("htonl(%04x) = %04x\n",b,htons(b)    );

	return 0;
}
