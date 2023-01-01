#include<iostream>
using namespace std;
int main()
{
    while (true)
    {
        cout<<"Enter a digit:"<<endl;
        int a;
        cin>>a;
        cout<<"Enter two numbers a and b:"<<endl;
        int b,c;
        cin>>b>>c;
        if (a==1)
        {
            cout<<"Sum of a and b is:"<<b+c<<endl;
        }
        else if (a==2)
        {
            cout<<"Difference of a and b is:"<<b-c<<endl;
        }
        else if (a==3)
        {
            cout<<"Product of a and b is:"<<a*b<<endl;
        }
        else if (a==4)
        {
            cout<<"Division of a by b is:"<<a/b<<endl;
        }
        else if (a==5)
        {
            cout<<"Remainder of a by b is:"<<a%b<<endl;
        }
        else if (a==6)
        {
            break;
        }
        else
        {
            cout<<"Invalid Operation"<<endl;
        }
    }
}