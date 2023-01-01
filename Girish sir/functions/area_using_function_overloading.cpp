#include<iostream>
using namespace std;
int area(int x)
{
    int area;
    area=x*x;
    cout<<area<<endl;
}
int area(int x,int y)
{
    int area;
    area=x*y;
    cout<<area<<endl;
}
int main()
{
    int a,b;
    cin>>a>>b;
    area(a);
    area(a,b);
    return 0;
}