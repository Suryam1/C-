#include<iostream>
#include<stack>
using namespace std;
void insert(stack<int>s,int var){
    s.push(var);
}
void remove(stack<int>s){
    s.pop();
}
void headOf_Stack(stack<int>s){
    cout<<s.top()<<endl;
}
bool find(stack<int>s,int val)
{
    bool exists=false;
    while (s.size()>0)
    {
        if (s.top()==val)
        return 1;
        s.pop();
    }
    return 0;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        stack<int>s;
        int q;
        cin>>q;
        while (q--){
            char ch;
            cin>>ch;
            if (ch=='i')
            {
                int x;
                cin>>x;
                insert(s,x);
            }
            else if (ch=='r')
            {
                remove (s);
            }
            else if (ch=='h')
            {
                headOf_Stack(s);
            }
            else if (ch=='f')
            {
                int x;
                cin>>x;
                if (find(s,x))
                cout<<"Yes";
                else 
                cout<<"No";
                cout<<endl;
                cout<<endl;
            }
        }
    }
}