
#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;

class node
{
    public:
    int value;
    class node* next;
    class node* prev;
};
class node* head;
class node* tail;

void init()
{
    head=NULL;
    tail=NULL;
}

void insertFirst(int element)
{
   node *newnode=new node();
   if (head==NULL){
       head=newnode;
       newnode->value=element;
       newnode->next=NULL;
       newnode->prev=NULL;
       tail=newnode;
   }
   else{
       newnode->next=head;
       head->prev=newnode;
       newnode->prev=NULL;
       head=newnode;
       newnode->value=element;
   }
}

void insertLast(int element)
{
   node *newnode=new node();
   if (head==NULL){
       head=newnode;
       newnode->value=element;
       newnode->next=NULL;
       newnode->prev=NULL;
       tail=newnode;
   }
   else{
       tail->next=newnode;
       newnode->prev=tail;
       newnode->next=NULL;
       newnode->value=element;
       tail=tail->next;
   }
}


void deleteFirst()
{
   node *temp=head;
   if (head==NULL){
       return ;
   }
   else if (head->next==NULL){
       head=NULL;
       delete temp;
       return ;
   }
   else{
       head=head->next;
       head->prev=NULL;
       delete temp;
       return ;
   }
}

void deleteLast()
{
    node *temp=tail;
   if (head==NULL){
       return ;
   }
   else if (head->next==NULL){
       head=NULL;
       delete temp;
       return ;
   }
   else{
       tail=tail->prev;
       tail->next=NULL;
       delete temp;
       return ;
   }
}

void printList()
{
    node *temp=head;
    while (temp!=NULL){
        cout<<temp->value<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main()
{
    init();

    int choice;
    while(1)
    {
        printf("1.InsertFirst 2. InsertLast 3.DeleteFirst 4. DeleteLast\n");
        printf("5. PrintList 6. Exit\n");

        cin>>choice;
        if(choice==1)
        {
            int element;
            cout<<"Enter element_";
            cin>>element;
            insertFirst(element);
            printList();
        }
        else if(choice==2)
        {
            int element;
            cout<<"Enter element_";
            cin>>element;
            insertLast(element);
            printList();
        }
        else if(choice==3)
        {
            deleteFirst();
            printList();
        }
        else if(choice==4)
        {
            deleteLast();
            printList();
        }
        else if(choice==5)
        {
            printList();
        }
        else if (choice==6){
            break;
        }
        
    }
return 0;
}

