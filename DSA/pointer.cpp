#include<iostream>
using namespace std;
int * f1(int *k)
{
    int *a= new int (10);
    //dynamic memory allocation
    *a += *k;
    *k*=*k;
    return a;
}
int main()
{
    int a=10;
    int b=20;
    int *p=&b;
    cout<<*p<<endl;
    *p =a;
    *p=15;
    int *c=f1(&b);
    cout<<*p<<" "<<a<<" "<<b<<" "<<*c<<endl;
    delete c;//to free dyanmic memory allocated
    return 0;
}