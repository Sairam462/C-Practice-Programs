#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter How many Eloements wants :: ";
    cin>>n;
    int A[n];
    cout<<"Enter Elements :: ";
    for(int i=0;i<n;i++)
        cin>>A[i];
    int temp;
    temp = A[0];
    for(int i=1;i<n;i++)
        A[i-1] = A[i];
    A[n-1] = temp;
    cout<<"Elements After Rotate is :: ";
    for(int i=0;i<n;i++)
    {
        cout<<A[i]<<" ";
    }
}