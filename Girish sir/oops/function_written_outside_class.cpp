#include <iostream>
using namespace std;
class rectangle{
    int width,height;
    public:
    void set_values(int,int);
    int area(){return width*height;}
};
void rectangle ::set_values(int x,int y){
    width=x;
    height=y;
}
int main()
{
    rectangle rect;
    rect.set_values(3,4);
    cout<<"area:"<<rect.area();
    return 0;
}