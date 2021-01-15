#include<stdio.h>
int Delete(int A[],int n,int x)
{
	int i,j;
	for(i=0;i<n;i++)
		if(A[i]==x)
			break;
	if(i==n)
		return n;
	for(j=i;j<n-1;j++)
		A[j]=A[j+1];
	for(i=0;i<n-1;i++)
		printf("Array is : %d\n",A[i]);
	return (n-1);
}
int main()
{
	int A[5]={1,2,3,4,5};
	printf("The Array Size is %d\n",Delete(A,5,3));
}
