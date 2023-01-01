#include <iostream>
using namespace std;
class A
{
    int x;
    public:
    A(){
        x=100;
    }
    void display(){
        cout<<x<<endl;
    }
};
int main()
{
    A obj;
    obj.display();
    return 0;
}