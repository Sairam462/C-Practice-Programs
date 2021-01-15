#include<stdio.h>
void Leader(int A[],int n)
{
	int i,j;
	int count=0;
	printf("Elements are :: ");
	for(i=0;i<n;i++)
	{
		int flag = 0;
		for(j=i+1;j<n;j++)
		{
			if(A[i]<=A[j])
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
		{
			printf("%d ",A[i]);
			count++;
		}
	}
	printf("\nNo.of Leader Elements are :: %d ",count);	
}
int main()
{
	int A[] = {7,10,6,5,2};
	Leader(A,5);
}
