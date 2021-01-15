#include<stdio.h>
#include<stdlib.h>
int main()
{
	int A[] = {1,2,3,4};
	int i,j;
	for(i=0;i<4;i++)
	{
		for(j=i+1;j<4;j++)
		{
			if(A[i]==A[j])
			{
				return i;
			}
		}
	}
	return 0;
}
