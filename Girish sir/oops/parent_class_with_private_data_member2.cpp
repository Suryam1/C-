#include <iostream>
using namespace std;
class A{
    int x,y;
    public:
    A(){
        cin>>x>>y;
    }
    int getx(){
        return x;
    }
    int gety(){
        return y;
    }
};
class B : public A{
    int z;
    public:
    B(){
        cin>>z;
    }
    void display()
    {
        cout<<"Sum of x, y and z = "<<getx()+gety()+z<<endl;
    }
};
int main()
{
    B obj;
    obj.display();
}