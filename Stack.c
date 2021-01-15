#include<stdio.h>
#define MAX_SIZE 101
int A[MAX_SIZE];
int top = -1;
void PUSH(int x)
{
	if(top==MAX_SIZE-1)
	{
		printf("Error : StackOverflow");
	}
	A[++top] = x;
}
void POP()
{
	if(top==-1)
	{
		printf("No Elements to Pop");
	}
	top--;
}
int Top()
{
	return A[top];
}
void Display()
{
	int i;
	printf("Stack is :");
	for(i=top;i>=0;i--)
	{
		printf("%d ",A[i]);
	}
	printf("\n");
}
int main()
{
	PUSH(2);Display();
	PUSH(4);Display();
	PUSH(6);Display();
	POP();Display();
	PUSH(12);Display();
	printf("%d",Top());
}
