#include<iostream>
using namespace std;
int main()
{
    if (true or true)
    {
        if (false and true or false)
        {
            cout<<"A"<<endl;
        }
        else if (false and false or true or false)
        {
            cout<<"B"<<endl;
        }
        else
        {
            cout<<"C"<<endl;
        }
    }
    else
    {
        cout<<"D"<<endl;
    }
}