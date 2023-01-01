#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter two numbers a and b:"<<endl;
    cin>>a>>b;
    if(a>b)
    {
        cout<<"A is greater so difference of A and B is:"<<a-b<<endl;
    }
    else{
        cout<<"B is greater so addition of A and B is:"<<a+b<<endl;
    }
    return 0;
}