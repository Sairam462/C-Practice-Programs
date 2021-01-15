#include<stdio.h>
#include<stdlib.h>
struct Node
{
	int data;
	struct Node *next;
};
struct Node *head=0;
void Insert()
{
	int n,i;
	printf("Enter How many Elements you want ?? \n");
	scanf("%d",&n);
	struct Node* newnode;
	newnode = (struct Node*)malloc(sizeof(struct Node));
	for(i=0;i<n;i++)
	{
		printf("Enter Elements : \n");
		scanf("%d",&newnode->data);
		newnode->next = head;
		head = newnode;
	}
	printf("Successfully Inserted");
}
void displayList()
{
    struct Node *temp;

    /*
     * If the list is empty i.e. head = NULL
     */
    if(head == NULL)
    {
        printf("List is empty.");
    }
    else
    {
        temp = head;
        while(temp != NULL)
        {
            printf("Data = %d\n", temp->data); // Print data of current node
            temp = temp->next;                 // Move to next node
        }
    }
}
int main()
{
	Insert();
	displayList();
}
