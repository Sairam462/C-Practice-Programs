#include<iostream>
using namespace std;
int Insert(int A[],int n,int cap,int pos,int x)
{
    if(n==cap)
        return n;
    int index = pos-1;
    for(int i=n-1;i>=index;i++)
        A[i] = A[i+1];
    A[index] = x;
    n = n+1;
    for(int j=0;j<=n;j++)
        cout<<A[j]<<endl;
}
int main()
{
    int A[10] = {10,20,30,40};
    int n=4;
    int cap = sizeof(A)/n;
    cout<<Insert(A,n,cap,5,50);

}