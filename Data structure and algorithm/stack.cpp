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
class queue{
    Node *head;
    Node *tail;
    int size;
    public:
    queue(){
        head=NULL;
        tail=NULL;
        size=0;
    }
    int getsize(){
        return size;
    }
    bool isempty(){
        return size==0;
    }
}

int main(){
    Node *head=takeinput();
    int n;
    cin>>n;
    cout<<length(head,n)<<endl;
}