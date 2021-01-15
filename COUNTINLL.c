#include<stdio.h>
#include<stdlib.h>
struct Node
{
	int data;
	struct Node *next;
};
struct Node *head;
void Insert(int x)
{
	struct Node *temp=head;
	temp=(struct Node*)malloc(sizeof(struct Node));
	temp->data=x;
	temp->next=head;
	head=temp;
}
void Display()
{
	struct Node *ptr=head;
	printf("List is : ");
	while(ptr!=NULL)
	{
		printf("%d\n",ptr->data);
		ptr=ptr->next;
	}
	printf("\n");
}
int count()
{
	int count=0;
	struct Node *link=head;
	while(link!=NULL)
	{
		count++;
		link=link->next;
	}
	return count;
}
int main()
{
	head=NULL;
	int n,i,x,c;
	printf("Enter How many Elemnts want to Enter ? ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		Insert(x);
		Display();
	}
	c=count();
	printf("Count is : ",c);
}
