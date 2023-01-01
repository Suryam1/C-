#include <iostream>
using namespace std;
class Rectangle{
    int width,height;
    public:
    Rectangle();
    Rectangle(int);
    Rectangle(int x,int y);
    int area(){return width*height;}
};
Rectangle::Rectangle(int x,int y)
{
    width=x;
    height=y;
}
Rectangle::Rectangle()
{
    cin>>width;
    cin>>height;
}
Rectangle::Rectangle(int a)
{
    width=a;
    height=a;
}
int main()
{
    Rectangle rect1;
    Rectangle rect2(10);
    Rectangle rect3(10,12);
    cout<<"area1 : "<<rect1.area()<<endl;
    cout<<"area2 : "<<rect2.area()<<endl;
    cout<<"area3 : "<<rect3.area()<<endl;
}