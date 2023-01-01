#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter two numbers a and b"<<endl;
    int a,b;
    cin>>a>>b;
    if (a>b)
    {
        cout<<"A is greater than B"<<endl;
    }
    if (a<b);
    {
        cout<<"B is greater than A"<<endl;
    }
    if (a==b)
    {
        cout<<"A is equal to B"<<endl;
    }
    if (a!=b)
    {
        cout<<"A is not equal to B"<<endl;
    }
    if (a<=b)
    {
        cout<<"A is less than or equal to B"<<endl;
    }
    if (a>=b)
    {
        cout<<"A is greater than or equal to B"<<endl;
    }
    return 0;
}