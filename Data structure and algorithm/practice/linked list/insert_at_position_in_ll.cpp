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

Node *insertposition(Node *head,int val,int pos){
    if(pos<0 || (pos>=1 && head==NULL)){
        cout<<"No such insertion"<<endl;
        return head;
    }
    else{
        Node *newnode=new Node(val);
        int x=0;
        Node *temp=head;
        while (x<pos-1){
            if (temp->next==NULL){
                cout<<"No such insertion"<<endl;
                return head;
            }
            x++;
            temp=temp->next;
        }
        if (pos==0){
            newnode->next=head;
            head=newnode;
        }
        else{
            newnode->next=temp->next;
            temp->next=newnode;
        }
    }
    return head;
}

void print(Node *head){
    Node *temp=head;
    while (temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main()
{
int t;
cin >> t;
while (t--)
{
Node *head = accept();
print(head);
int data,pos;
cin>>data>>pos;
Node *head1=insertposition(head,data,pos);
print(head1);
}
}
