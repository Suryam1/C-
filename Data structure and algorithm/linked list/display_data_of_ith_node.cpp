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
int length(Node *head,int n){
    int c=0;
    Node *temp=head;
    while (c!=n && temp!=NULL){
        temp=temp->next;
        c++;
    }
    return temp->data;
}
int main(){
    Node *head=takeinput();
    int n;
    cin>>n;
    cout<<length(head,n)<<endl;
}