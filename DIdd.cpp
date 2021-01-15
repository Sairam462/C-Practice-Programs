#include<stdio.h>
int main()
{
	int i,j;
	int A[] ={6,7,1,3,8,2,5};
	int val = A[0];
	int val2 = A[1];
	int sum =0;
	for(i=val+1;i<7;i++)
	{
		if(i%2==0)
		{
			sum +=val + A[i];
		}
	}
	printf("Diff is :: %d",sum);
	
}
