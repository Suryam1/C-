#include<iostream>
using namespace std;
struct test{
    int x;
    string y;
}mausi;
int main()
{
    test arr[5];
    arr[0]={1,"tt"};
    test *ptr=arr;
    cout<<ptr->x<<" "<<ptr->y<<endl;
    return 0;
}