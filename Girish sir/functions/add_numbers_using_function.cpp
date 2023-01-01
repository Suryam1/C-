#include<iostream>
using namespace std;
void f(int x,int y)
{
    cout<<x+y<<endl;
}
int main()
{
    int a,b;
    cin>>a>>b;
    f(a,b);
    cout<<"back in main"<<endl;
    //cout<<x<<" "<<y<<endl;
    return 0;
}