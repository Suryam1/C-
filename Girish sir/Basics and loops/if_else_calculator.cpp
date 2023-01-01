#include<iostream>
using namespace std;
int main()
{
    char op;
    cout<<"Enter operation:"<<endl;
    cin>>op;
    int a,b;
    cout<<"Enter two numbers:"<<endl;
    cin>>a>>b;
    if (op=='+')
    {
        cout<<"sum of"<<a<<"and"<<b<<"="<<a+b<<endl;
    }
    else if (op=='-')
    {
        cout<<"diff of"<<a<<"and"<<b<<"="<<a-b<<endl;
    }
    else if (op=='*')
    {
        cout<<"product of"<<a<<"and"<<b<<"="<<a*b<<endl;
    }
    else if (op=='/')
    {
        cout<<"quotient of"<<a<<"and"<<b<<"="<<a/b<<endl;
    }
    else{
        cout<<"Invalid operation"<<endl;
    }
    return 0;
}