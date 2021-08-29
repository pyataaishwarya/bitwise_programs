#include<stdio.h>
int SetBit(unsigned int ,unsigned int );
int main()
{
	unsigned int n,pos;
	printf("enter the number\n");
	scanf("%d",&n);
	printf("enter position for checking\n");
	scanf("%u",&pos);
	n=SetBit(n,pos);
	printf("the %d bit set now in given number 0x%x\n",pos,n);
}
int SetBit(unsigned int n,unsigned int pos)
{
	return (n|(1<<pos));
}


