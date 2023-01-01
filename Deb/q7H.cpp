#include <iostream>
using namespace std;
class A{
    int x,y;
    public:
    A(int x=0,int y){
        x=x;
        y=y;
        cout<<x<<" "<<y;
    }
};

int main(){
    A obj(10,11);
    
}