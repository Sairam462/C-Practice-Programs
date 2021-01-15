#include<iostream>
using namespace std;
int main()
{
	int A[] = {2,3,10,6,4,8,1};
	int n=7;
	int MinValue = A[0];
	int Res = A[1]-A[0];
	for(int i=1;i<n;i++)			// It took O(n) time
	{
		Res = max(Res,A[i]-MinValue);
		MinValue = min(MinValue,A[i]);
	}
	cout<<"Minimum Difference is :: "<<Res<<endl;
}
