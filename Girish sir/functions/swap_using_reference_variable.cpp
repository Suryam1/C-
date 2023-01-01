#include<iostream>
using namespace std;
void swap(int &a,int &b);
int main()
{
    int x,y;
    cin>>x>>y;
    swap(x,y);
    cout<<"value after swaaping"<<endl;
    cout<<"a="<<x<<"b="<<y<<endl;
    return 0;
}
void swap(int &a,int &b)
{
    int n3;
    n3=a;
    a=b;
    b=n3;
    cout<<"value after swaping in swap function"<<endl;
    cout<<"a="<<a<<"b="<<b<<endl;
}