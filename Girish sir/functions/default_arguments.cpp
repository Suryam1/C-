#include <iostream>
using namespace std;
int f(int a,int b =10,int c=20)
{
    return a+b+c;
}
int main()
{
    cout<<f(100)<<endl;
    cout<<f(5,10)<<endl;
    cout<<f(5,10,20)<<endl;
}