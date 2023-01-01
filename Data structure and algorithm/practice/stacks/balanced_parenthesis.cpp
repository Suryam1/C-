#include <iostream>
#include <stack>
#include <cstring>
using namespace std;

bool checkBalanced(char *exp) {
    stack<char>s;
    int x=strlen(exp);
    for (int i=0;i<x;i++){
        if (exp[i]=='(' || exp[i]=='{' || exp[i]=='[')
        s.push(exp[i]);
        else if (exp[i]==')' || exp[i]=='}' || exp[i]==']'){
            char c;
            c=s.top();
            s.pop();
            if (c=='(' && exp[i]==')'){
                continue;
            }
            else if (c=='{' && exp[i]=='}'){
                continue;
            }
            else if (c=='[' && exp[i]==']'){
                continue;
            }
            else{
                return false;
            }
        }
    }
    if (s.size()==0){
        return true;
    }
    else{
        return false;
    }
}

int main() {
    char input[100];
    cin.getline(input, 100);
    if(checkBalanced(input)) {
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }
}
