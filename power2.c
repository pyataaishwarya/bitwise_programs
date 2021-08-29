#include<stdio.h>
#define NUM_BITS_INT (8*sizeof(int))
int power2(unsigned int);
 
int main()
{
    unsigned int num;
    int a;
    printf("Enter Number\n");
    scanf("%d", &num);
    a=power2(num);
    if(a==1)
	    printf("number power of 2\n");
    else
	    printf("number not power of 2\n");
}
int power2(unsigned int x)
{
    int i, count = 0, res, shift_num;
 
    for (i = 0;i <= NUM_BITS_INT;i++)
    {
        shift_num = x >> i;
        res = shift_num & 1;
        if (res == 1)
            count++;
    }
    return count;
}
