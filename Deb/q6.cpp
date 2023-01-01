#include <iostream>
using namespace std;
class A{
    int a,b;
    int accept();
    int display();
}
int A::accept(){
    cin>>a>>b;
}
int A::display(){
    cout<<a<<b;
}
int main(){
    A obj;
    obj.accept();
    obj.display();
}