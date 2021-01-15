#include<bits/stdc++.h>
using namespace std;
void PrintFirstN(int n)
{
    queue<int> q;
    q.push("5");
    q.push("6");
    for(int count=0;count<n;count++)
        string curr = q.front();
        cout<<curr<<" ";
        q.pop();
        q.push(curr + "5");
        q.push(curr + "6");
}
int main()
{
    int n;
    cout<<"Enter Length :: ";
    cin>>n;
    PrintFirstN(n);
}