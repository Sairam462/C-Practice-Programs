#include<stdio.h>
int FirstOccurence(int *A,int n,int x)
{
    int low,high,mid,result=-1;
    low =0;
    high = n-1;

    while(low<=high)
    {
        mid = (low+high)/2;
        if(x==A[mid])
        {
            result = mid;
            high = mid - 1;
        }
        else if(x<A[mid])
        {
            high = mid-1;
        }
        else
        {
            low = mid+1;
        }
    }
  return result;
}
int LastOccurence(int *A,int n,int x)
{
    int low,high,mid,result=-1;
    low =0;
    high = n-1;

    while(low<=high)
    {
        mid = (low+high)/2;
        if(x==A[mid])
        {
            result = mid;
            low = mid + 1;
        }
        else if(x<A[mid])
        {
            high = mid-1;
        }
        else
        {
            low = mid+1;
        }
    }
  return result;
}
int CountOccurance(int A[],int n,int x)
{
    int first;
    first = FirstOccurence(A,n,20);
    if(first == -1)
        return -1;
    else
    {
        return (LastOccurence(A,n,20)-first + 1);
    }
    
}
int main()
{
    int A[] ={10,10,20,20,20,30};
    int n = sizeof(A)/sizeof(A[0]);
    printf("%d \n",FirstOccurence(A,n,20));
    printf("%d \n",LastOccurence(A,n,20));
    printf("%d ",CountOccurance(A,n,20));
}