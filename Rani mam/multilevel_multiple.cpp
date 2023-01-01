#include <iostream>
using namespace std;
class Triangle{
    public:
    Triangle(){
        cout<<"Triangle class"<<endl;
    }
};
class Isosceles:public Triangle{
    public:
    void display(){
        cout<<"Isosceles triangle"<<endl;
    }
};
class Equilateral:public Triangle{
    public:
    void display(){
        cout<<"Equilateral triangle"<<endl;
    }
};
int main(){
    Isosceles a;
    Equilateral b;
    a.display();
    b.display();
}