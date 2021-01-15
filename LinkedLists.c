#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;
}*head = NULL;
void Create(int x)
{
    struct Node *temp;
    temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = x;
    temp->next = NULL;
    temp->next = head;
    head = temp;
}
void Delete(int n)
{
    struct Node *ptr = head;
    if(n==1)
    {
        head = ptr->next;
        free(ptr);
    }
    int i;
    for(i=0;i<n-2;i++)
        ptr=ptr->next;
    struct Node *temp = ptr->next;
    ptr->next = temp->next;
    free(temp);
}
void Display()
{
    int i;
    struct Node *temp;
    temp=head;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp = temp->next;
    }
    printf("\n");
}
int main()
{
    Create(40);
    Create(30);
    Create(20);
    Create(10);
    Display();
    Delete(3);
    Display();
}