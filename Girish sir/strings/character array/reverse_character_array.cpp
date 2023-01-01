#include<iostream>
using namespace std;
int main()
{
    char a[]="Python";
    cout<<a<<endl;
    for (int i=0;a[i]!='\0';i++)
    cout<<a[i]<<endl;
    int n=sizeof(a)/sizeof(char);
    for (int i=n-2;i>=0;i--)
    cout<<a[i]<<endl;
    return 0;
}