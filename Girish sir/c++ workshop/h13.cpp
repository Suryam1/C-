#include<iostream>
using namespace std;
struct test{
    int x;
    string y;
}mausi;
int main()
{
    test first={2,"kansal"};
    test *ptr=&first;
    cout<<ptr->x<<" "<<ptr->y<<endl;
    return 0;
}