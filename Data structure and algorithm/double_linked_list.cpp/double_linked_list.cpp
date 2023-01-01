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
    class node* newItem;
    newItem=new node;
    if(head==NULL)
    {
        head=newItem;
        newItem->prev=NULL;
        newItem->value=element;
        newItem->next=NULL;
        tail=newItem;
    }
    else
    {
        newItem->next=head;
        newItem->value=element;
        newItem->prev=NULL;
        head->prev=newItem;
        head=newItem;
    }
}

void insertLast(int element)
{
    class node* newItem;
    newItem=new node;
    newItem->value=element;
    if(head==NULL)
    {
        head=newItem;
        newItem->prev=NULL;
        newItem->next=NULL;
        tail=newItem;
    }
    else
    {
        newItem->prev=tail;
        tail->next=newItem;
        newItem->next=NULL;
        tail=newItem;
    }
}

void insertAfter(int old, int element)
{
    class node* newItem;
    newItem=new node;
    class node* temp;
    temp=head;
    if(head==NULL)
    {
        cout<<"could not insert"<<endl;
        return;
    }
    if(head==tail)
    {
        if(head->value!=old)
        {
            cout<<"could not insert"<<endl;
            return;
        }
        newItem->value=element;
        head->next=newItem;
        newItem->next=NULL;
        head->prev=NULL;
        newItem->prev=head;
        tail=newItem;
        return;
    }
    if(tail->value==element)
    {
        newItem->next=NULL;
        newItem->prev=tail;
        tail->next=newItem;
        tail=newItem;
        return;
    }
    while(temp->value!=old)
    {
        temp=temp->next;
        if(temp==NULL)
        {
            cout<<"Could not insert"<<endl;
            cout<<"element not found"<<endl;
            return;
        }
    }

    newItem->next=temp->next;
    newItem->prev=temp;
    newItem->value=element;
    temp->next->prev=newItem;
    temp->next=newItem;
}

void deleteFirst()
{
    if(head==NULL)
    {
        return;
    }
    if(head==tail)///one element in the list
    {
        class node* cur;
        cur=head;
        head=NULL;
        tail=NULL;
        delete cur;
        return;
    }
    else
    {
        class node* cur;
        cur=head;
        head=head->next;
        head->prev=NULL;
        delete cur;
    }
}

void deleteLast()
{
    if(head==NULL) return;
    if(head==tail)
    {
        class node* cur;
        cur=head;
        head=NULL;
        tail=NULL;
        delete cur;
        return;
    }
    else
    {
        class node* cur;
        cur=tail;
        tail=tail->prev;
        tail->next=NULL;
        delete cur;
    }
}
void deleteItem(int element)
{
    class node* temp;
    temp=head;
    if(head==tail)
    {
        if(head->value!=element)
        {
            cout<<"could not delete"<<endl;
            return;
        }
        head=NULL;
        tail=NULL;
        delete temp;
        return;
    }
    if(head->value==element)
    {
        head=head->next;
        head->prev=NULL;
        delete temp;
        return;
    }
    else if(tail->value==element)
    {
        temp=tail;
        tail=tail->prev;
        tail->next=NULL;
        delete temp;
        return;
    }
    while(temp->value!=element)
    {
        temp=temp->next;
        if(temp==NULL)
        {
            cout<<"element not found"<<endl;
            return;
        }
    }
    temp->next->prev=temp->prev;
    temp->prev->next=temp->next;
    delete temp;
}

class node* searchItem(int element)
{
    class node* temp;
    temp=head;
    while(temp!=NULL)
    {
        if(temp->value==element)
        {
            return temp;
            break;
        }
        temp=temp->next;
    }
    return NULL;
}

void printList()
{
    class node* temp;
    temp=head;
    while(temp!=NULL)
    {
        printf("%d->",temp->value);
        temp=temp->next;
    }
    puts("");
}

void printReverse()
{
    class node* temp;
    temp=tail;
    while(temp!=NULL)
    {
        cout<<temp->value<<"->";
        temp=temp->prev;
    }
    cout<<endl;
}

void makereverse()
{
    class node* prv=NULL;
    class node* cur=head;
    class node* nxt;
    while(cur!=NULL)
    {
        nxt=cur->next;
        cur->next=prv;
        prv=cur;
        cur=nxt;
    }
    head=prv;
}

int dltfrst()
{
    if(head==NULL)
    {
        return 0;
    }
    int prev;
    prev=head->value;
    if(head==tail)///one element in the list
    {
        class node* cur;
        cur=head;
        head=NULL;
        tail=NULL;
        delete cur;
        return prev;
    }
    else
    {
        class node* cur;
        cur=head;
        head=head->next;
        head->prev=NULL;
        delete cur;
        return prev;
    }
}
int dltlast()
{
    if(head==NULL) return 0;
    int prev;
    prev=tail->value;
    if(head==tail)
    {
        class node* cur;
        cur=head;
        head=NULL;
        tail=NULL;
        delete cur;
        return prev;
    }
    else
    {
        class node* cur;
        cur=tail;
        tail=tail->prev;
        tail->next=NULL;
        delete cur;
        return prev;
    }
}
void leftRotate(int x)
{
    for(int i=0;i<x;i++)
    {
        int a=dltfrst();
        insertLast(a);
    }
}
void rightRotate(int x)
{
    for(int i=0;i<x;i++)
    {
        int a=dltlast();
        insertFirst(a);
    }
}

int main()
{
    init();

    int choice;
    while(1)
    {
        printf("1.InsertFirst 2. InsertLast 3. InsertAfter 4.DeleteFirst 5. DeleteLast\n");
        printf("6.SearchItem 7. PrintList 8. ReversePrint 9. DeleteItem \n");
        printf("10. Left Rotate 11. Right Rotate 12. Exit  13.Make reverse\n");
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
            int old,newitem;
            cout<<"Enter Old Item_";
            cin>>old;
            cout<<"Enter new Item_";
            cin>>newitem;
            insertAfter(old,newitem);
            printList();
        }
        else if(choice==4)
        {
            deleteFirst();
            printList();
        }
        else if(choice==5)
        {
            deleteLast();
            printList();
        }
        else if(choice==6)
        {
            int item;
            cout<<"Enter Item to Search_";
            cin>>item;
            class node* ans=searchItem(item);
            if(ans!=NULL) cout<<"FOUND "<<ans->value<<endl;
            else cout<<"NOT FOUND"<<endl;
        }
        else if(choice==7)
        {
            printList();
        }
        else if(choice==8)
        {
            printReverse();
        }
        else if(choice==9)
        {
            int element;
            cin>>element;
            deleteItem(element);
            printList();
        }
        else if(choice==10)
        {
            int x;
            cin>>x;
            leftRotate(x);
            printList();
        }
        else if(choice==11)
        {
            int x;
            cin>>x;
            rightRotate(x);
            printList();
        }
        else if(choice==12)
        {
            break;
        }
        else if(choice==13)
        {
            makereverse();
        }
    }
return 0;
}