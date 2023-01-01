#include <iostream>
using namespace std;
class A{
    public:
    void display()
    {cout<<"In A"<<endl;}
};
class B:public A{
    public:
    void display()
    {cout<<"In B"<<endl;}
};
class C :public B{
    public:
    void display()
    {cout<<"In C"<<endl;}
};
int main()
{
    C obj;
    obj.display();
}