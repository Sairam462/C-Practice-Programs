#include<stdio.h>
LinearSearch(int A[],int n,int x)
{
	for(int i=0;i<n;i++)
	{
		if(A[i]==x)
		{
			return i;
		}
		else
		{
			return -1;
		}
	}
}
int main()
{
	int A[]={1,2,3,5,7};
	printf(LinearSearch(A,5,7));
	
}
