#include<iostream>
using namespace std;
int f1(int x,int y,int z)
{
    if (x>y && x>z)
    return x;
    else if (y>x && y>z)
    return y;
    else
    return z;
}
int f2(int x,int y,int z)
{
    if (x<y && x<z)
    return x;
    else if (y<x && y<z)
    return y;
    else
    return z;
}
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    cout<<f1(a,b,c)<<endl;
    cout<<f2(a,b,c)<<endl;
    return 0;
}