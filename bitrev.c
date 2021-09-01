#include<stdio.h>
int bit_reverse (int );

int main()
{
	int n;
	printf("enter number\n");
	scanf("%d",&n);
	printf("reverse of number is %x\n",bit_reverse(n));
}
int bit_reverse(int n)
{
	int i,j;
	for(i=0,j=(sizeof(n)*8)-1;i<j;i++,j--)
	{
		if((n&(1<<i))!=(n&(1<<j)))
		{
			n=n^(1<<i);
			n=n^(1<<j);
		}
	}
	return n;
}
