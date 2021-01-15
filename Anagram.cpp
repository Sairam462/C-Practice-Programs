#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
bool IsAnagram(string s1,string s2)
{
    if(s1.length() != s2.length())
        return false;
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    return (s1==s2);
}
int main()
{
    string str = "SITARAM";
    string str2 ="RAMSTIA";
    bool Z = IsAnagram(str,str2);
    if(Z==1)
    {
        cout<<str<<"  and  "<<str2<<" are Anagrams"<<endl;
    }
    else
    {
        cout<<str<<"  and  "<<str2<<"  are Not Anagrams"<<endl;
    }
}