#include<iostream>
using namespace std;
void f(int x=50,int y=100)
{
    cout<<x+y<<endl;
}
int main()
{
    int a,b;
    cin>>a>>b;
    f(a);
    f(a,b);
    f();
    cout<<"back in main"<<endl;
    //cout<<x<<" "<<y<<endl;
    return 0;
}