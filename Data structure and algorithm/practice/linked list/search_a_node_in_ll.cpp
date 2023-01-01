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


int findNode(Node *head, int n){
    int x=0;
    Node *temp=head;
    while (temp!=NULL){
        if (temp->data==n){
            return x;
        }
        x++;
        temp=temp->next;
    }
    return -1;
}


int main()
{
int t;
cin >> t;
while (t--)
{
Node *head = accept();
int val;
cin >> val;
cout << findNode(head, val) << endl;
}
}
