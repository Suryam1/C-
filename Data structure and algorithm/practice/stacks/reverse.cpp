#include <iostream>
#include <stack>
using namespace std;

void reverse(string &str, int n)
{
   stack<char>s;
   for (int i=0;i<n;i++){
       s.push(str[i]);
   }
   str="";
   for (int i=0;i<n;i++){
       char x=s.top();
       s.pop();
       str=str+x;
   }
}
 
int main()
{
    string str = "Hello, World";
 
    reverse(str, str.length());
    cout << "Reverse of the given string is " << str;
 
    return 0;
}
