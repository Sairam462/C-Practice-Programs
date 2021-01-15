#include<iostream>
using namespace std;
bool isSort(int A[],int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(A[j]<A[i])
			{
				return false;
			}
		}
	}
	return true;
}
int main()
{
	int A[]={10,20,30,40};
	int n=4;
	cout<<isSort(A,4);
	
}
