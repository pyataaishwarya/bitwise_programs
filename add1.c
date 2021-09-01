#include<stdio.h>
int add_one(int n)
{
	n=-(~n);
	return n;
}
int main()
{
	int n;
	printf("enter the number\n");
	scanf("%d",&n);
	printf("number after adding one is %d\n",add_one(n));
}
