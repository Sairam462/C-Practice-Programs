#include<iostream>
using namespace std;
int LMCR(string str)
{
    for(int i=0;i<str.length();i++)
    {
        for(int j=i+1;j<str.length();j++)
        {
            if(str[i]==str[j])
            {
                return i;
            }
        }
    }
}
int NRMCR(string str)
{
    for(int i=str.length()-1;i>=0;i--)
    {
        for(int j=i-1;j>=0;j--)
        {
            if(str[i]==str[j])
            {
                return j;
            }
        }
    }
}
int main()
{
    string str = "aabcdde";
    cout<<LMCR(str)<<endl;;
    cout<<NRMCR(str);
}