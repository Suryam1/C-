#include <bits/stdc++.h>
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



Node *accept()
{
int data;
cin >> data;
Node *head = NULL, *tail = NULL;
while (data != -1)
{
Node *newNode = new Node(data);
if (head == NULL)
{
head = newNode;
tail = newNode;
}
else
{
tail->next = newNode;
tail = newNode;
}
cin >> data;
}
return head;
}
void print(Node *head)
{
    Node *temp;
    temp=head;
    while (temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

void checkpalidrone(Node *head){
    Node *temp=head;
    string s,s1;
    while (temp!=NULL){
        int x=temp->data;
        temp=temp->next;
        s=s+to_string(x);
    }
    s1=s;
    reverse(s.begin(),s.end());
    if (s==s1){
        cout<<"Palindrone"<<endl;
    }
    else{
        cout<<"Not palindrone"<<endl;
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
checkpalidrone(head);
}

return 0;
}
