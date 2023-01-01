#include<iostream>
using namespace std;
int f(int x,int y)
{
    if (x>=y)
    return x;
    else
    return y;
}
int main()
{
    int a,b,result;
    cin>>a>>b;
    result=f(a,b);
    cout<<"back in main"<<endl;
    cout<<result<<endl;
    //cout<<x<<" "<<y<<endl;
    return 0;
}