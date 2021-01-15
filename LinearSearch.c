#include<stdio.h>
int LinearSearch(int A[],int n,int x)
{
	int i;
	for(i=0;i<=n;i++)
		if(A[i]==x)
			return i;
	return -1;
}
int main()
{
	int A[]={1,2,3,5,7};
	printf("Found at : %d",LinearSearch(A,5,7));
	
}
