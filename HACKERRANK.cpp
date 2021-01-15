#include<iostream>
#include<Algorithm>
using namespace std;
int main()
{
	int flag,count;
  string s1 = "COVID";
  string s2 = "COVIDZS";
  sort(s1.begin(),s1.end());
  sort(s2.begin(),s2.end());
  for(int i=0;i<s1.length();i++)
  {
  		for(int j=0;j<s1.length();j++)
  		{
			if(s1[i]==s2[j])
			{
				flag++;
			}
		}
	count =1;
  }
  if(flag==(s1.length()-1))
  {
  	cout<<count;
  }
  else
  {
  	cout<<"Nope";
  }
}
