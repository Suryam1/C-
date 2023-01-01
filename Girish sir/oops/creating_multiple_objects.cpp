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
    rectangle recta,rectb;
    recta.set_values(3,4);
    rectb.set_values(5,7);
    cout<<"area1: "<<recta.area()<<endl;
    cout<<"area2: "<<rectb.area()<<endl;
    return 0;
}