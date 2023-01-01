#include<iostream>
using namespace std;
void f();
int main()
{
    f();
    f();
    cout<<"back in main"<<endl;
    return 0;
}
void f()
{
    cout<<"in function"<<endl;
}