#include <iostream>
using namespace std;

//constructor

class A{
    public:
    A()
    {
        cout<<"A"<<endl;
    }
};
class B:public A{
    public:
    B()
    {
        cout<<"B"<<endl;
    }
};
class C:public B{
    public:
    C()
    {
        cout<<"C"<<endl;
    }
};
int main()
{
    C obj;
}