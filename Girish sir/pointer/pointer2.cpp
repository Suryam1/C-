#include<iostream>
using namespace std;
int main()
{
    int i=10,j,*p;
    p=&i;
    *p=*p+i;
    cout<<i<<" "<<*p<<endl;
    j=*p;
    cout<<j<<" "<<*p<<endl;
    return 0;
}