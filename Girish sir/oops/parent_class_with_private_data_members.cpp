#include <iostream>
using namespace std;
class A{
    private:
    int x;
    public:
    void accept(){
        cin>>x;
    }
    int getx(){
        return x;
    }
};
class B:public A{
    int y;
    public:
    void f(){
        cin>>y;
    }
    void display(){
        cout<<getx()<<" "<<y<<endl;
        cout<<"Sum = "<<getx()+y<<endl;
    }
};
int main(){
    B obj;
    obj.accept();
    obj.f();
    obj.display();
    return 0;
}