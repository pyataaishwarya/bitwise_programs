#include<stdio.h>
int checkbit(int ,int );
int main()
{
	int num,bit;
	printf("Enter a number\n");
	scanf("%d",&num);
	printf("enter bit\n");
	scanf("%d",&bit);
	if(checkbit(num,bit))
		printf("%d is set",bit);
	else
		printf("%d is reset",bit);
	return 0;
}
int checkbit(int num,int bit)
{
	return (num&(1<<bit));
}

		
