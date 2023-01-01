#include <iostream>
using namespace std;
class rectangle{
    int width,height;
    public:
    void getvalues();
    int area()
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
    int n;
    cout<<"Enter no of rectangles you want to take";
    cin>>n;
    rectangle obj1[n];
    int a[n],max,b;
    for (int i=0;i<n;i++)
    {
        obj1[i].getvalues();
        a[i]=obj1[i].area();
    }
    max=a[0];
    b=0;
    for (int i=0;i<n;i++)
    {
        if (a[i]>max)
        {max=a[i];
        b=i;}
    }
    cout<<"MAX AREA IS "<<max<< " WHICH IS THE "<<b+1<<" RECTANGLE";
}
