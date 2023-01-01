#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
    Node (int d)
    {
        data=d;
        next=NULL;
    }
};
int main()
{
    Node *head= new Node (10);
    Node *temp=new Node(20);
    Node *temp2=new Node(30);
    head->next=temp;
    head->next->next=temp2;
    temp=head;
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    return 0;
}