#include<stdio.h>
int Insert(int A[],int n,int x,int pos,int cap)
{
	int i;
	if(n==cap)
		return n;
	else
	{
	int index = pos-1;
	for(i=n-1;i>=index;i--)
		A[i+1]=A[i];
	
	A[index]=x;
	n++;
	printf("Elements are :: ");
	for(i=0;i<n;i++)
	{
		printf("%d",A[i]);
	}
}
}
int main()
{
	int A[8]={1,2,3,4,5,6};
	Insert(A,6,7,7,8);
}
