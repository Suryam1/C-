#include <iostream>
using namespace std;
class A{
    int x;
    static int y;
    public:
    A()
    {
        x=0;
        x++;
        y++;
    }
    void display()
    {
        cout<<"x = "<<x<<" y = "<<y<<endl;
    }
};
int A::y;
int main()
{
    A obj1;
    A obj2;
    A obj3;
    obj1.display();
    obj2.display();
    obj3.display();
}