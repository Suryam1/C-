#include <iostream>
using namespace std;
#include <stack>

bool checkBalanced(char *exp) {
    stack<char> s;
    int i = 0;
while(exp[i]!= '\0'){
        if(exp[i]=='{' || exp[i]=='[' || exp[i]=='('){
            s.push(exp[i]);
        }
        else if(exp[i]=='}'){
            if(s.empty()) {
                return false;
            }
            if(s.top()=='{'){
                s.pop();
            }
            else
                return false;
        }
        else if(exp[i]==']'){
            if(s.empty()) {
                return false;
            }
            if(s.top()=='['){
                s.pop();
            }
            else
                return false;
        }
        else if(exp[i]==')'){
            if(s.empty()) {
                return false;
            }
            if(s.top()=='('){
                s.pop();
            }
            else
                return false;
        }
        i++;
    }
    if(s.empty()){
        return true;
    }
    else
        return false;
}

int main() {
    char input[100000];
    cin.getline(input, 100000);
    if(checkBalanced(input)) {
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }
}