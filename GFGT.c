#include<stdio.h>
int Print(int n)
{
	if(n>0)
	{
		printf("%d\n",n);
		Print(n-1);
	}
}
int main()
{
	int n;
	printf("Enter Number :: \n");
	scanf("%d",&n);
	Print(n);
}
