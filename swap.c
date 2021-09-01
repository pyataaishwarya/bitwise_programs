#include<stdio.h>
void swap(int *x,int *y);
int main()
{
	int x,y;
	printf("enter the numbers to swap\n");
	scanf("%d%d",&x,&y);
	swap(&x,&y);
	printf("elements after swap are x=%d and y=%d\n",x,y);
}
void swap(int *x,int *y)
{
	*x=*x^*y;
	*y=*x^*y;
	*x=*x^*y;
}


