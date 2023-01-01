#include <iostream>
using namespace std;
class Rectangle{
    int width,height;
    public:
    Rectangle();
    int area(){return width*height;}
};
Rectangle::Rectangle()
{
    cin>>width;
    cin>>height;
}
int main()
{
    Rectangle rect1,rect2;
    cout<<"area1 : "<<rect1.area()<<endl;
    cout<<"area2 : "<<rect2.area()<<endl;
}