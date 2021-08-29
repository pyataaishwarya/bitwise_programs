#include<stdio.h>
int toggleBit(unsigned int ,unsigned int );
int main()
{
        unsigned int n,pos;
        printf("enter the number\n");
        scanf("%d",&n);
        printf("enter position for checking\n");
        scanf("%u",&pos);
        n=toggleBit(n,pos);
        printf("the %d bit toggled in given number 0x%x\n",pos,n);
}
int toggleBit(unsigned int n,unsigned int pos)
{
        return (n^(1<<pos));
}


