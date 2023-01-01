#include<bits/stdc++.h>
using namespace std;
 
class Node
{
public:
    int data;
    Node *next;
};
 
class Node *addToEmpty(struct Node *last, int data)
{
    // This function is only for empty list
    if (last != NULL)
      return last;
 
    // Creating a node dynamically.
   class Node *temp = new Node();
 
    // Assigning the data.
    temp -> data = data;
    last = temp;
 
    // Creating the link.
    last -> next = last;
 
    return last;
}
 
class Node *addBegin(class Node *last, int data)
{
    if (last == NULL)
        return addToEmpty(last, data);
 
    class Node *temp = new Node();
 
    temp -> data = data;
    temp -> next = last -> next;
    last -> next = temp;
 
    return last;
}
 
void traverse(class Node *last)
{
    Node *temp;
    if (last==NULL){
        cout<<"list empty"<<endl;
    }
    temp=last->next;
    do{
        cout<<temp->data<<" ";
        temp=temp->next;
    }while (temp!=last->next);
    cout<<endl;

}
 
// Driven Program
int main()
{
    class Node *last = NULL;
 
    last = addToEmpty(last, 6);
    last = addBegin(last, 4);
    last = addBegin(last, 2);
    last = addBegin(last, 8);
    last = addBegin(last, 12);
 
    traverse(last);
 
    return 0;
}
