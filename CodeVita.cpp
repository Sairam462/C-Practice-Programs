//This is The Coding Area

#include<stdio.h>
bool CheckPair(int n1,int n2)
{
  string string1 = to_string(n1);
  string string2 = to_string(n2);
  int k,l;
  for(k=0;k<string1.size();k++)
  {
    for(l=0;l<string2.size();l++)
    {
      if(string1[i]==string2[i])
      {
        return true;[
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
                if(CheckPair(A[i],A[j])
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
  printf("%d\n",Count(A,n);
         return 0;
}
