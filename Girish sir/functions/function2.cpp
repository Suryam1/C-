#include<iostream>
using namespace std;
void f()
{
    cout<<"in function"<<endl;
}
int main()
{
    f();
    f();
    cout<<"back in main"<<endl;
    return 0;
}