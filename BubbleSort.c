#include<stdio.h>
void swap(int *x,int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
void Bubble(int A[],int n)
{
    int i,j;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(A[j]>A[j+1])
            {
                swap(&A[j],&A[j+1]);
            }
        }
    }
}
int main()
{
    int A[]= {10,8,7,4,5,6,12,1};
    int n = 8;
    Bubble(A,n);
    int i;
    for(i=0;i<n;i++)
        printf("%d ",A[i]);
}