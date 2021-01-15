#include<stdio.h>
void Rotate(int A[],int n)
{
	int i;
	int Temp = A[0];
	for(i=1;i<n;i++)
		A[i-1] =A[i];
	A[n-1]=Temp;
	printf("Elements are : ");
	for(i=0;i<n;i++)
	{
		printf("%d ",A[i]);
	}
}
int main()
{
	int A[]={1,2,3,4,5};
	Rotate(A,5);
}
