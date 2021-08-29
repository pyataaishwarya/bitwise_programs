#include<stdio.h>
int main()
{
        unsigned int n=1;
        char *c=(char*)&n;
        if(*c)
		printf("little endian\n");
	else
		printf("big endian\n");
	return 0;
}


