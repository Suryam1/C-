#include <iostream>
using namespace std;
class circle
{
    float r;
    public:
    void accept()
    {cin>>r;}
    void dislpayarea()
    {cout<<3.14*(r*r)<<endl;}
    void displaycircumference()
    {cout<<2*3.14*r<<endl;}
};
int main()
{
    circle obj;
    obj.accept();
    obj.dislpayarea();
    obj.displaycircumference();
    return 0;
}