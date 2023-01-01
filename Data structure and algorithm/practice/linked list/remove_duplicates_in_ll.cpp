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

Node *accept()
{
int data;
cin >> data;
Node *head = NULL, *tail = NULL;
while (data != -1)
{
Node *newnode = new Node(data);
if (head == NULL)
{
head = newnode;
tail = newnode;
}
else
{
tail->next = newnode;
tail = newnode;
}
cin >> data;
}
return head;
}

void print(Node *head)
{
Node *temp = head;
while (temp != NULL)
{
cout << temp->data << " ";
temp = temp->next;
}
cout << endl;
}
Node *removeDuplicates(Node *head)
{
   Node *temp1=head;
   while (temp1->next!=NULL){
       if (temp1->data!=temp1->next->data){
           temp1=temp1->next;
       }
       else{
           temp1->next=temp1->next->next;
       }
   }
   return head;
}
int main()
{
int t;
cin >> t;
while (t--)
{
Node *head = accept();
print(head);
head = removeDuplicates(head);
print(head);
}
return 0;
}
