#include<iostream>
using namespace std;
void f(int *a)
{
    int n =sizeof(a)/sizeof(int);
    for (int i=0;i<n;i++)
    cout<<a[i]<<" ";
    cout<<endl;
}
int main()
{
    int a[]={10,20,30,40,50,60,70,80};
    int n=sizeof(a)/sizeof(int);
    cout<<n<<endl;
    for (int i=0;i<n;i++)
    cout<<a[i]<<endl;
    cout<<endl;
    f(a);
    return 0;
}