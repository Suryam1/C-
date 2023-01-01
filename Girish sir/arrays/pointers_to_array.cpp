#include<iostream>
using namespace std;
void f(int *a)
{
    int n= sizeof(a);
    cout<<n<<endl;
}
int main()
{
    int a[]={10,20,30,40,50,60,70,80};
    int n = sizeof(a);
    cout<<n<<endl;
    f(a);
    return 0;
}