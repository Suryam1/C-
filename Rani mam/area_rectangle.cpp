#include <iostream>
using namespace std;
class rectangle{
    int width,height;
    public:
    void getvalues();
    area()
    {return width*height;}
};
void rectangle::getvalues()
{
    cout<<"Enter Width ";
    cin>>width;
    cout<<"Enter Height ";
    cin>>height;
}
int main()
{
    int a1,a2;
    rectangle obj1;
    rectangle obj2;
    obj1.getvalues();
    obj2.getvalues();
    a1=obj1.area();
    a2=obj2.area();
    if (a1>a2)
    cout<<"AREA ONE IS GREATER"<<endl;
    else
    cout<<"AREA TWO IS GREATER"<<endl;
}
