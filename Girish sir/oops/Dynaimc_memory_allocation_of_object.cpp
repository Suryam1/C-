#include <iostream>
using namespace std;
class A{
    int x,y;
    public:
    A();
    void display();
};
A::A()
{
    cin>>x>>y;
}
void A::display()
{
    cout<<x+y<<endl;
}
int main()
{
    A obj1;
    obj1.display();
    A *obj2 = new A();
    obj2->display();
}