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
Node *temp = head;
while (temp != NULL)
{
cout << temp->data << " ";
temp = temp->next;
}
cout << endl;
}

Node *mergeTwoSortedLinkedLists(Node *head1, Node *head2)
{
   if (head1==NULL){
       return head2;
   }
   else if (head2==NULL){
       return head1;
   }
   else{
       Node *head3=NULL,*temp3=head3;
       Node *temp1=head1,*temp2=head2;
       while (temp1!=NULL && temp2!=NULL){
           if (temp1->data<=temp2->data){
               if (head3==NULL){
                   head3=temp1;
                   temp1=temp1->next;
                   temp3=head3;
               }
               else{
                   temp3->next=temp1;
                   temp1=temp1->next;
                   temp3=temp3->next;
               }
           }
           else if (temp1->data>temp2->data){
               if (head3==NULL){
                   head3=temp2;
                   temp2=temp2->next;
                   temp3=head3;
               }
               else{
                   temp3->next=temp2;
                   temp2=temp2->next;
                   temp3=temp3->next;
               }
           }
       }
       while (temp1!=NULL){
           temp3->next=temp1;
           temp1=temp1->next;
           temp3=temp3->next;
       }
       while (temp2!=NULL){
           temp3->next=temp2;
           temp2=temp2->next;
           temp3=temp3->next;
       }
       return head3;
   }
}

int main()
{
int t;
cin >> t;
while (t--)
{
Node *head1 = accept();
Node *head2 = accept();
print(head1);
print(head2);
Node *head3 = mergeTwoSortedLinkedLists(head1, head2);
print(head3);
}
return 0;
}
