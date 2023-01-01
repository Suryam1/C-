#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter two numbers a and b:"<<endl;
    int a,b;
    cin>>a>>b;
    if (a>b)
    {
        cout<<"A is greater than B"<<endl;
    }
    else if (a<b)
    {
        cout<<"B is greater than A"<<endl;
    }
    else
    {
        cout<<"A equal to B"<<endl;
    }
    
}