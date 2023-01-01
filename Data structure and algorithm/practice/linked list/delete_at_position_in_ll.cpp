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

Node *deleteposition(Node *head,int pos){
    if (pos<0 || (pos>=1 && head==NULL)){
        cout<<"No such deletion."<<endl;
        return head;
    }
    else{
        Node *temp=head,*last=head;
        int x=0;
        while (x<pos){
            if (temp->next==NULL){
                cout<<"No such deletion"<<endl;
                return head;
            }
            x++;
            last=temp;
            temp=temp->next;
        }
        if (pos==0){
            head=head->next;
            delete temp;
            return head;
        }
        else{
            last->next=temp->next;
            delete temp;
            return  head;
        }

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
int pos;
cin>>pos;
Node *head1= deleteposition(head,pos);
print(head1);
}
}
