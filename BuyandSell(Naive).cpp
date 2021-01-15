#include<iostream>
using namespace std;
int MaxBenifit(int A[],int start,int end)
{
	int i,j;
	int C_Profit;
	int Profit=0;
	if(end<=start)
		return 0;
	for(i=start;i<end;i++)
	{
		for(j=i+1;j<=end;j++)
		{
			if(A[j]>A[i])
			{
				C_Profit = A[j]-A[i] + MaxBenifit(A,start,i-1) + MaxBenifit(A,j+1,end);
				Profit = max(Profit,C_Profit);
			}
		}
	}
	return Profit;
}
int main()
{
	int C;
	int A[]={1,5,3,8,12};
	C=MaxBenifit(A,0,4);
	cout<<"Maximum Profit is %d :: "<<C;
}
