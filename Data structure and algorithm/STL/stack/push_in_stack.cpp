#include <iostream>
#include <stack>
using namespace std;
int main(){
    stack<int>s;
    s.push(21);
    s.push(22);
    s.push(23);
    s.push(24);
    s.pop();
    s.pop();
    while (!s.empty()){
        cout<<" "<<s.top();
        s.pop();
    }
}