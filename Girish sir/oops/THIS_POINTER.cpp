#include <iostream>
using namespace std;
class A{
    int x,y;
    public:
    A (int x,int y){
        this->x=x;
        this->y=y;
    }
    void display(){
        cout<<x<<" "<<y<<endl;
    }
};
int main(){
    A obj(10,20);
    obj.display();
}