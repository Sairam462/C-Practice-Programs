#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p;
	p=(int *)malloc(sizeof(int));
	*p=4;
	printf("%d\n",*p);
	printf("%d\n",p);
}
