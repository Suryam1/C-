#include <iostream>
using namespace std;
class A
{
    int count;
    public:
    A()
    {
        count=0;
    }
    void inc(A obj)
    {
        for (int i=0;i<3;i++)
        {
            obj.count++;
            cout<<obj.count<<endl;
        }
    }
    void display()
    {
        cout<<count<<endl;
    }
};
int main()
{
    A obj;
    obj.inc(obj);
    obj.display();
    return 0;
}