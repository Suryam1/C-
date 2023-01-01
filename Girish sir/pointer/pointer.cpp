#include<iostream>
using namespace std;
int main()
{
    int i,j,*p;
    cin>>i;
    p=&i;
    *p=20;
    cout<<i<<" "<<*p<<endl;
    ++*p;
    cout<<*p<<" "<<i<<endl;
    p=&j;
    *p=50;
    cout<<i<<" "<<j<<" "<<*p<<endl;
    return 0;
}