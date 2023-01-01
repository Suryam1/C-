#include<bits/stdc++.h>
using namespace std;
void deleteMid(stack<int>&s,int size){
    stack<int>stk;
    int mid=ceil(size/2);
    for (int i=0;i<mid;i++){
        stk.push(s.top());
        s.pop();
    }
    s.pop();
    while (!stk.empty()){
        s.push(stk.top());
        stk.pop();
    }
}
int main() {

    int t;

    cin>>t;

   

    while(t--)

    {

        int sizeOfStack;

        cin>>sizeOfStack;

       

        stack<int> myStack;

       

        for(int i=0;i<sizeOfStack;i++)

        {

            int x;

            cin>>x;

            myStack.push(x);   

        }

 

           

            deleteMid(myStack,myStack.size());

            while(!myStack.empty())

            {

                cout<<myStack.top()<<" ";

                myStack.pop();

            }

        cout<<endl;

    }  

    return 0;

}