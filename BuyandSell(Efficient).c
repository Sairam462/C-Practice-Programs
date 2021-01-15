#include<stdio.h>
void MaxProfit(int A[],int n)
{
	int Profit=0;
	int i;
	for(i=1;i<=n;i++)
	{
		if(A[i]>A[i-1])
		{
			Profit = Profit + (A[i] - A[i-1]);
		}
	}
	printf("Maximum Benifit is :: %d ",Profit);
}
int main()
{
	int A[6],i;
	printf("Enter Elements you want :: ");
	for(i=0;i<6;i++)
	{
		scanf("%d",&A[i]);
	}
	MaxProfit(A,5);
}
