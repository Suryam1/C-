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
Node *length(Node *head,int pos,int v){
    if (head==NULL)
    return head;
    Node *temp=head,*x;
    Node *newnode=new Node(v);
    if (pos==0){
        newnode->next=head;
        head=newnode;
        return head;
    }
    for (int i=0;i<pos-1;i++){
        temp=temp->next;
    }
    x=temp->next;
    temp->next=newnode;
    newnode->next=x;
    return head;
}
int main(){
    int t;
    cin>>t;
    while (t--){
    Node *head=takeinput();
    int n,x;
    cin>>n>>x;
    head=length(head,n,x);
    print(head);
    }
    
}