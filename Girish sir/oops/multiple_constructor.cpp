#include <iostream>
using namespace std;

class A{
    int x,y;
    public:
    A();
    A(int,int);
    void display();
};
A::A()
{
    cin>>x>>y;
}
A::A(int a,int b)
{
    x=a;
    y=b;
}
void A::display()
{
    cout<<x+y<<endl;
}
int main()
{
    A obj1;
    obj1.display();
    A obj2;
    obj2.display();
    A obj3(1,2);
    obj3.display();
}