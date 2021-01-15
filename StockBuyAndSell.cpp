#include<iostream>
using namespace std;
int main()
{
	int A[] ={1,5,3,8,12};
	int Profit = 0;
	for(int i=1;i<5;i++)		//Time Complexity is = O(n)
	{
		if(A[i]>A[i-1])
		{
			Profit = Profit + A[i]-A[i-1];
		}
	}
	cout<<"Max Profit is :: "<<Profit<<endl;
}
