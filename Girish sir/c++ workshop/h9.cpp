#include<iostream>
using namespace std;
void func(int *a)
{
    *a=10;
    return ;
}
int main()
{
    int x=1;
    func(&x);
    cout<<x;
    return 0;
}