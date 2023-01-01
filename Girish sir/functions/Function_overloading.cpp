#include <iostream>
using namespace std;
void f(int a)
{
    cout<<"In Int "<<a<<endl;
}
void f(double a)
{
    cout<<"In Float "<<a<<endl;
}
int main()
{
    f('A');
    f(125);
    //f(125.56);
    f(125.56f);
}