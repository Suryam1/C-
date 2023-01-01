#include <iostream>
using namespace std;
class circle
{
    double radius;
    public:
    circle (double r){radius=r;}
    double circum(){return 2*radius*3.14;}
};
int main()
{
    circle a(10.0);
    circle b=20.0;
    circle c {30.0};
    circle d={40.0};
    cout<<a.circum()<<endl;
    cout<<b.circum()<<endl;
    cout<<c.circum()<<endl;
    cout<<d.circum()<<endl;
}