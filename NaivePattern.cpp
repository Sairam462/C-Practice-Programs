#include<iostream>
using namespace std;
void Naive(string str,string ptr)
{
    int m = ptr.length();
    int n = str.length();
    for(int i=0;i<=n-m;i++)
    {
        int j;
        for(j=1;j<=m;j++)
        {
            if(ptr[j]!=str[i+j])
                break;
        }
        if(j==m)
            cout<<i<<" ";
    }
}
int main()
{
    string str = "ABCABCD";
    string ptr = "ABC";
    Naive(str,ptr);
}