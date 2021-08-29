#include<stdio.h>
unsigned int little_big(unsigned int );
int main()
{
	int n;
	printf("enter the little endian\n");
	scanf("%d",&n);
	printf("big endian %d\n",little_big(n));
}
unsigned int little_big(unsigned int n)
{
	return (( n & 0xFF000000 >> 24) | ( n & 0x000000FF << 24) | ( n & 0x00FF0000 >> 8) | ( n & 0x0000FF00 << 8));
}
