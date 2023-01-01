#include <bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int data;
    Node *next;
    Node (int data){
        this->data=data;
        this->next=NULL;
    }
};
Node *takeinput(){
    int data;
    cin>>data;
    Node *head=NULL, *tail=NULL;
    while (data !=-1){
        Node *newNode=new Node(data);
        if (head==NULL){
            head=newNode;
            tail=newNode;
        }
        else{
            tail->next=newNode;
            tail=newNode;
        }
        cin>>data;
    }
    return head;
}
void print(Node *head)
{
    Node *temp=head;
    while (temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
Node *length(Node *head,int n){
    if (head==NULL)
    return head;
    if (n==0)
    return head->next;
    Node *temp=head;
    int c=0;
    while (temp!=NULL && c<n-1){
        ++c;
        temp=temp->next;
    }
    if (temp==NULL || temp->next==NULL)
    return head;
    temp->next=temp->next->next;
    return head;
}
int main(){
    Node *head=takeinput();
    int n;
    cin>>n;
    head=length(head,n);
    print (head);
}