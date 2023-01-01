#include <iostream>
using namespace std;
class A{
    public:
    A()
    {cout<<"A"<<endl;}
};
class B:public A{
    public:
    B()
    {cout<<"B"<<endl;}
};
class C:public B{
    public:
    C()
    {cout<<"C"<<endl;}
    C(int x)
    {cout<<"C PARA"<<endl;}
};
int main()
{
    C obj1;
    C obj2(100);
    B obj3;
}