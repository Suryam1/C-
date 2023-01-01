#include <iostream>
#include <string>
using namespace std;
class Node {
   public:
    int data;
    Node *next;

    Node(int data) {
        this->data = data;
        next = NULL;
    }
};


class Queue {
	 Node *head;
    Node *tail;
    int size;
   public:
    Queue() {
        head = NULL;
        tail = NULL;
        size = 0;
    }

	 int getSize() { 
        return size;
    }

    bool isEmpty() { 
         if (size==0){
             return true;
         }
         return false;
    }

    void push(int data) {
       Node *newnode=new Node(data);
       if (head==NULL){
           head=newnode;
           tail=newnode;
       }
       else{
           tail->next=newnode;
           tail=tail->next;
       }
       size++;
    }

    int pop() {
        Node *temp=head;
        if (head==NULL){
            return -1;
        }
        else{
            head=head->next;
            int x=temp->data;
            delete temp;
            return x;
        }
    }
    int front() {
        if (head==NULL){
            return  -1;
        }
        return head->data;
    }
};


int main() {
    Queue q;
    int input;
    cin >> input;
    q.push(input);
    cin >> input;
    q.push(input);
    cin >> input;
    q.push(input);
    
	cout << q.front() << "\n";
    cout << q.getSize() << "\n";
	cout << ((q.isEmpty()) ? "true\n" : "false\n");
     
	cout << q.pop() << "\n";
    cout << ((q.isEmpty()) ? "true\n" : "false\n");
        }
