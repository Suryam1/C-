#include <iostream>
using namespace std;
class circle
{
    float l,b;
    public:
    void accept()
    {cin>>l>>b;}
    void dislpayarea()
    {cout<<l*b<<endl;}
};
int main()
{
    circle obj;
    obj.accept();
    obj.dislpayarea();
    return 0;
}