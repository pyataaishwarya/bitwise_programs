#include<stdio.h>
unsigned int nibble_swap(unsigned int );
int main()
{
	int n;
	printf("enter number\n");
	scanf("%x",&n);
	printf("number after swap %d\n",nibble_swap(n));
}
unsigned int nibble_swap(unsigned int n)
{
	return ((n&(0xF0>>4))|(n&(0x0F<<4)));
}

