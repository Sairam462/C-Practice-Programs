#include<stdio.h>
void Remove(int A[],int n)
{
	int Temp[n];
	int i;
	Temp[0]=A[0];
	int Result = 1;
	for(i=1;i<n;i++)
	{
		if(Temp[Result-1]!=A[i])
		{
			Temp[Result]=A[i];
			Result++;
		}
	}
	printf("Elemets are :: ");
	for(i=0;i<Result;i++)
		printf("%d ",Temp[i]);
	printf("\nSize is : %d ",Result);
		
}
int main()
{
	int A[7]={10,20,20,30,30,30,40};
	Remove(A,7);

}
