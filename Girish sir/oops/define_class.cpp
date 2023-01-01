#include <iostream>
using namespace std;
class a
{
    int a,b;
    public:
    void accept()
    {cin>>a>>b;}
    void display()
    {cout<<a<<b<<endl;}
};
int main()
{
    a obj,obj1;
    obj.accept();
    obj.display();
    obj1.accept();
    obj1.display();
    return 0;
}