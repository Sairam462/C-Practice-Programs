#include<iostream>
using namespace std;
void Leader(int A[],int n){
  for(int i=0;i<n;i++){
    bool flag = true;
    for(int j=i+1;j<n;j++){
      if(A[j]>A[i]){
        flag = false;
      }
    }
    if(flag==true){
      cout<<A[i]<<" ";
    }
  }
}
int main()
{
    int A[] = {10,4,6,2,1};
    int n = sizeof(A)/sizeof(A[0]);
    Leader(A,n);
}
