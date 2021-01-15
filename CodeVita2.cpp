//This is The Coding Area

#include<iostream>
#include <bits/stdc++.h>
#include<string>
using namespace std;
bool CheckPair(int num1,int num2)
{
  string string1 = to_string(num1);
  string string2 = to_string(num2);
  int k,l;
  for(k=0;k<string1.size();k++)
  {
    for(l=0;l<string2.size();l++)
    {
      if(string1[k]==string2[k])
      {
        return true;
      }
    }
  }
return false;
}
int Count(int A[],int n)
          {
            int Number = 0;
            int k,l;
            for(k=0;k<n;k++)
            {
              for(l=k+1;l<n;l++)
              {
                if(CheckPair(A[k],A[l])
                   {
                     Number++;
                   }
              }
            }
                   return Number;
          }
int main()
{
  int A[] = {8 ,234 ,567, 321, 345 ,123, 110, 767, 111};
  int n = sizeof(A)/sizeof(A[0]);
  cout<<Count(A,n)<<endl;
         return 0;
}
