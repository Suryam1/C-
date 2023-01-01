#include<iostream>
using namespace std;


class Node {
    public :
    int data;
    Node *next;
    Node(int data) {
        this -> data = data;
        next = NULL;
    }
};

class MyStack {
    Node *head;
    int size;       // number of elements prsent in stack
    public :
    MyStack() {
        head=NULL;
        size=0;
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
   
    void push(int element) {
        Node *newnode=new Node(element);
        if (head==NULL){
            head=newnode;
        }
        else{
            newnode->next=head;
            head=newnode;
        }
        size++;
    }
   
    int pop() {
        Node *temp=head;
        if (head==NULL){
            return -1;
        }
        else if (head->next==NULL){
            size--;
            int x=head->data;
            head=NULL;
            delete temp;
            return x;
        }
        else{
            size--;
            int x=head->data;
            head=head->next;
            delete temp;
            return x;
        }
    }
   
    int top() {
       if (head==NULL){
           return -1;
       }
       else{
           return head->data;
       }
    }
};



    int main() {
        MyStack st;
        int choice;
        cout<<"1. Push 2. Pop 3. Top 4. Getsize 5. Empty"<<endl;
        cin >> choice;
        int input;
        while (choice !=-1) {
            if(choice == 1) {
                cin >> input;
                st.push(input);
            }
            else if(choice == 2) {
                int ans = st.pop();
                if(ans != 0) {
                    cout << ans << endl;
                }
                else {
                    cout << "-1" << endl;
               }
            }
            else if(choice == 3) {
                int ans = st.top();
                if(ans != 0) {
                    cout << ans << endl;
                }
                else {
                    cout << "-1" << endl;
                }
            }
            else if(choice == 4) {
                cout << st.getSize() << endl;
            }
            else if(choice == 5) {
                 if(st.isEmpty()){
                    cout << "true" << endl;
                 }else{
                    cout << "false" << endl;
                      }
            }
            cout<<"1. Push 2. Pop 3. Top 4. Getsize 5. Empty"<<endl;
            cin >> choice;
        }
    }
