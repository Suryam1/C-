#include <iostream>
using namespace std;

class Node
{
public:
int data;
Node *next;
Node(int data)
{
this->data = data;
this->next = NULL;
}
};


Node * accept()
{
int data;
cin >> data;
Node *head = NULL, *tail = NULL;
while (data != -1)
{
    Node *newnode=new Node(data);
    if (head==NULL){
        head=newnode;
        tail=newnode;
    }
    else{
        tail->next=newnode;
        tail=newnode;
    }
    cin>>data;
}
return head;
}

void print(Node *head){
    Node *temp;
    temp=head;
    while (temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

Node *deletelast(Node *head){
    Node *temp=head,*last=NULL;
    if (head==NULL){
        return head;
    }
    else if (head->next==NULL){
        return head;
    }
    else{
        while (temp->next!=NULL){
            last=temp;
            temp=temp->next;
        }
        last->next=NULL;
        delete temp;
        return head;
    }
}

int main()
{
int t;
cin >> t;
while (t--)
{
Node *head = accept();
print(head);
Node *head1= deletelast(head);
print(head1);
}
}
