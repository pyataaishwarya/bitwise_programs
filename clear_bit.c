#include<stdio.h>
int clearBit(unsigned int ,unsigned int );
int main()
{
        unsigned int n,pos;
        printf("enter the number\n");
        scanf("%d",&n);
        printf("enter position for checking\n");
        scanf("%u",&pos);
        n=clearBit(n,pos);
        printf("the %d bit reset in given number 0x%x\n",pos,n);
}
int clearBit(unsigned int n,unsigned int pos)
{
        return (n & ~(1<<pos));
}



