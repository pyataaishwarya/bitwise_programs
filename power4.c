#include<stdio.h>


int powerof4(int n)
{
	if(n == 0)
		return 0;
	while(n != 1)
	{
		if(n % 4 != 0)
			return 0;
		n = n / 4;	
	}
	return 1;
}

int main()
{
	int num;
	printf("enter number\n");
	scanf("%d",&num);
	if(powerof4(num))
		printf("%d is a power of 4\n", num);
	else
		printf("%d is not a power of 4\n", num);
}

