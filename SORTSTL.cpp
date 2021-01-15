#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int A[] = {5,2,7,10,20};
    int n = 5;
    Sort(A,A+n);
    for(int x:A)
        cout<<x<<" ";
    Sort(A,A+n,greater<int>);
    for(int x:A)
        cout<<endl;
        cout<<x<<" ";
    return 0;
}