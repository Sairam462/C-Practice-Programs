#include<stdio.h>
#include<stdlib.h>
struct Node
{
	int data;
	struct Node *next;
}*top = NULL;
void PUSH(int x)
{
	struct Node *temp;
	temp = (struct Node *)malloc(sizeof(struct  Node));
	temp->data = x;
	temp->next = top;
	top = temp;
}
void POP()
{
	struct Node *temp;
	if(top==NULL)	return;
	temp = top;
	top = top->next;
	free(temp);
}
void Display()
{
	struct Node *temp;
	temp=top;
	printf("stack is :");
	while(temp!=NULL)
	{
		printf("%d ",temp->data);
		temp = temp->next;
	}
	printf("\n");
}
int TOP()
{
	struct Node *temp = top;
	return temp->data;
}
int main()
{
	PUSH(2); Display();
	PUSH(4); Display();
	PUSH(6); Display();
	POP(); Display();
	PUSH(2); Display();
	printf("%d",TOP());
}
