#include<iostream>
using namespace std;
void swap(int,int);
int main()
{
    int a,b;
    cin>>a>>b;
    swap(a,b);
    cout<<"value after swaaping"<<endl;
    cout<<"a="<<a<<"b="<<b<<endl;
    return 0;
}
void swap(int a,int b)
{
    int n3;
    n3=a;
    a=b;
    b=n3;
    cout<<"value after swaping in swap function"<<endl;
    cout<<"a="<<a<<"b="<<b<<endl;
}