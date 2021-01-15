#include<iostream>
using namespace std;
int main()
{
	int A[] = {2,2,4,6,7,8,8,9};
	int n=8;
	int Temp[n];
	Temp[0] = A[0];
	int Result = 1;
	for(int i=1;i<n;i++)
	{
		if(Temp[Result-1]!= A[i])
		{
			Temp[Result] = A[i];
			Result++;
		}
	}
	for(int i=0;i<n;i++)
	{
		cout<<Temp[i]<<" ";
	}
}
