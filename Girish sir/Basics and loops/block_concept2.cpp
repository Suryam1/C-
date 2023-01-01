#include<iostream>
#include<cctype>
using namespace std;
int main()
{
    int a=10,b=20;
    {
        int a=100;
        b=100;
        cout<<a<<endl;
        cout<<b<<endl;
        cout<<a+b<<endl;
    }
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<a+b<<endl;
    return 0;  
 }