#include <iostream>
using namespace std;
class a{
    public:
    a()
    {
        cout<<"Default"<<endl;
    }
    a(int x)
    {
        cout<<"A"<<endl;
    }
};

int main()
{
    a obj;
    a obj1(10);
    a *obj2=new a();
}