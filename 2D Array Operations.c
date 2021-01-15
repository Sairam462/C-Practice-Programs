#include<stdio.h>
int main()
{
	int A[2][3];
	int i,j,x;
	printf("Enter Elements You want to add :: ");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&A[i][j]);
		}
	}
	printf("\nElements are :: ");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",A[i][j]);
		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			if(A[i][j]%2==0)
			{
				printf("\n%d",A[i][j]);
			}
		}
	}

}
