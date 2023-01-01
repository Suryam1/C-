#include<iostream>
using namespace std;
void fun(int &y)
{
    y=1;
    return ;
}
int main()
{
    int x=10;
    fun(x);
    cout<<x;
    return 0;
}