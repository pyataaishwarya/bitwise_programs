#include<stdio.h>

int positive_negative(int n)
{
	if((n>>31) & 1 == 1)
                return 1;
        else
                return 0;
}
int main()
{
	int n,m;
	printf("enter the number\n");
	scanf("%d",&n);
	m=positive_negative(n);
	if(m==1)
		printf("negative number\n");
	else
		printf("positive number\n");
}

