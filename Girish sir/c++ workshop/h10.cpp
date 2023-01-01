#include<iostream>
using namespace std;
int main()
{
    int a=1,b=2;
    int &x=a;
    x=10;
    cout<<a<<endl;
    x=b;
    cout<<a<<b;
}