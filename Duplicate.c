#include<stdio.h>
void Duplicate(int A[],int n)
{
	int i,j;
	int Temp[n];
	Temp[0]=A[0];
	int Result =1 ;
	for(i=1;i<n;i++)
	{
		if(Temp[Result-1]!=A[i])
		{
			Temp[Result] = A[i];
			Result++;
		}
	}
	printf("New Array is : ");
	for(i=0;i<Result;i++)
	{
		printf("%d ",Temp[i]);
	}
}
int main()
{
	int A[]={10,20,20,30,30,30};
	Duplicate(A,6);
}
