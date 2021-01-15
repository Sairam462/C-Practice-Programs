#include<stdio.h>
void LeaderInArray(int A[],int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        int flag = 0;
        for(j=i+1;j<n;j++)
        {
            if(A[i]<=A[j])
            {
                flag = 1;
            }                               /* This is Taking O(n^2)*/
        }
        if(flag==0)
        {
            printf("\n %d ",A[i]);
        }
    }
}
void leader(int A[],int n)
{
    int i;
    int curr_leader;
    curr_leader = A[n-1];
    printf("%d ",curr_leader);
    for(i=n-2;i>=0;i--)
    {
        if(curr_leader<A[i])
        {
            curr_leader = A[i];
            printf("%d ",curr_leader);
        }
    }
}
int main()
{
    int A[] = {2,4,10,4,6,5,2};
    int n = sizeof(A)/sizeof(A[0]);
    LeaderInArray(A,n);
    leader(A,n);
}