#include<stdio.h>
int bit_reverse (int );

int main()
{
	int n;
	printf("enter number\n");
	scanf("%d",&n);
	printf("reverse of number is %d\n",bit_reverse(n));
}
int bit_reverse(int n)
{
	int i,j;
	for(i=0,j=(sizeof(int)*8);i<j;i++,j--)
	{
		if(!(n&(1<<i))==!(n&(1<<j)))
			continue;
		n=n^(1<<i);
		n=n^(1<<j);
	}
	return n;
}
