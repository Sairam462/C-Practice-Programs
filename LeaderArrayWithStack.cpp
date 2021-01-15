#include<iostream>
#include<stack>
using namespace std;
int main()
{
	stack<int> S;
	int A[] ={7,10,4,3,6,5,2};
	int n=7;
	int Curr_Leader;
	for(int i=n-2;i>=0;i--)
	{
		if(Curr_Leader<A[i])
		{
			Curr_Leader = A[i];
			S.push(Curr_Leader);
		}
	}
	while(S.empty()==false)
	{
		cout<<S.top()<<" ";
		S.pop();
	}
		 Curr_Leader = A[n-1];
			cout<<Curr_Leader;
	
}
