#include<iostream>
#include<stack>
using namespace std;
 
int prec(char c){
    if(c=='^')
    return 3;
    else if(c=='*'||c=='/')
    return 2;
    else if(c=='+'||c=='-')
    return 1;
    else
    return  -1;
}
 
string infixtoPostfix(string s){
    stack<char>st;
    string str;
    for (int i=0;i<s.length();i++){
        if ((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z')){
            str+=s[i];
        }
        else if(s[i]=='('){
            st.push(s[i]);
        }
        else if(s[i]==')'){
            while(st.empty()==false && st.top()!='('){
                str+=st.top();
                st.pop();
            }
            if (st.empty()==false){
                st.pop();
            }
        }
        else{
            while (st.empty()==false && prec(st.top())>=prec(s[i])){
                str+=st.top();
                st.pop();
            }
            st.push(s[i]);
        }
    }
    while (st.empty()==false){
        str+=st.top();
        st.pop();
    }
    return str;
}
 
int main(){
 
    cout<<infixtoPostfix("(a-b/c)*(a/k-l)")<<endl;
 
}
