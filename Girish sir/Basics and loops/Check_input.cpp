#include<iostream>
using namespace std;
int main()
{
    char op;
    cout<<"Enter a character:"<<endl;
    cin>>op;
    if (op>='A' && op<='Z')
    {
        cout<<"1"<<endl;
    }
    else if (op>='a' && op<='z')
    {
        cout<<"2"<<endl;
    }
    else
    {
        cout<<"3"<<endl;
    }
    return 0;
}