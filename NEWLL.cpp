#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node* next;
};
Node * head = NULL;
void Insert(int x)
{
    Node* Temp = new Node;
    Temp->data = x;
    Temp->next = head;
    head = Temp;
}
void Display()
{
    Node* curr = head;
    while (curr!=NULL)
    {
        cout<<(curr->data)<<" ";
        curr = curr->next;
    }
    
}
int main()
{
    int n,x;
    cout<<"How Many Nodes want to Insert ::";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cout<<"\nEnter Node "<<i<<" :: ";
        cin>>x;
        Insert(x);
        Display();
    }
}