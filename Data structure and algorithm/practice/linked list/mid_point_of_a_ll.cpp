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


Node *midPoint(Node *head)
{
   Node *temp=head;
   int c=0;
   if (head==NULL){
       return head;
   }
   else{
       while (temp!=NULL){
           c++;
           temp=temp->next;
       }
       temp=head;
       int x=1;
       if (c%2==0){
           c=c/2;
           while (x<c){
           temp=temp->next;
           x++;
        }
       }
       else{
           c=c/2;
           while (x<=c){
           temp=temp->next;
           x++;
        }
       }
        return temp;
   }
}
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

int main()
{
int t;
cin >> t;
while (t--)
{
Node *head = accept();
Node *mid = midPoint(head);
if (mid != NULL)
{
cout << mid->data;
}
cout << endl;
}
return 0;
}
