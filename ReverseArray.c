#include<stdio.h>
void Reverse(int A[],int n)
{
	int low=0,high = n-1;
	while(low<high)
	{
		int temp;
		temp=A[low];
		A[low]=A[high];
		A[high]=temp;
		low++;
		high--;
	}
	int i;
	printf("Reversed Array is :: ");
	for(i=0;i<n;i++)
		printf("%d ",A[i]);
}
int main()
{
	int A[]={1,2,3,4,5,6};
	Reverse(A,6);
}
