#include<iostream>
using namespace std;
struct test{
    int x;
    int y;
}mausi;
int main()
{
    test first;
    test *ptr=&first;
    first.x=1;
    first.y=2;
    cout<<ptr->x<<" "<<ptr->y<<endl;
    return 0;
}