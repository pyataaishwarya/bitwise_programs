#include<stdio.h>
int evenodd(int );
int main()
{
	int n,check;
	printf("enter the number\n");
	scanf("%d",&n);
	check=evenodd(n);
	if(check==1)
		printf("number %d is odd\n",n);
	else
		printf("number %d is even\n",n);
}
int evenodd(int n)
{
	return (n&1);
}

