#include<stdio.h>
#include<stdlib.h>
struct Node
{
	int data;
	struct Node * prev;
	struct Npde *next;
}*head = NULL;
struct Node* Create(int x)
{
	struct Node * Newnode = (struct NodeZ*)malloc(sizeof(struct Node));
	Newnode->data = x;
	Newnode->prev = NULL;
	Newnode->next = NULL;
	return Newnode;
}
void InsertB(int x)
{
	struct Node * Newnode = Create(x);
	if(head==NULL)
	{
		head = Newnode;
		return;
	}
	head->prev = Newnode;
	Newnode->next = head;
	head = Newnode;
}
void TailInsert(int x)
{
	struct Node * Newnode = Create(x);
	if(head == NULL)
	{
		head = Newnode;
		return;
	}
	struct Node *temp;
	temp = head;
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	temp->next = Newnode;
	Newnode->prev = temp;
}
void Print()
{
	struct Node * temp;
	temp = head;
	printf("Forward : ");
	while(temp!=NULL)
	{
		printf("%d ",temp->data);
		temp = temp->next;
	}
	printf("\n");
}
void ReversePrint()
{
	struct Node *temp;
	temp = head;
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	printf("Reverse : ");
	while(temp!=NULL)
	{
		printf("%d ",temp->data);
		temp=temp->prev;
	}
	printf("\n");
}
int main()
{
	TailInsert(2); Print() ; ReversePrint();
	TailInsert(4); Print() ; ReversePrint();
	InsertB(6) ; Print() ; ReversePrint();
	InsertB(8) ; Print() ; ReversePrint();
}
