#include<iostream>
using namespace std;
void accept(int a[],int n)
{
    for (int i=0;i<n;i++)
    cin>>a[i];
}
void display(int a[],int n)
{
    for (int i=0;i<n;i++)
    cout<<a[i]<<" ";
    cout<<endl;
}
void reverse(int a[],int n)
{
    for (n--;n>=0;n--)
    cout<<a[n]<<" ";
    cout<<endl;
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    accept(a,n);
    display(a,n);
    reverse(a,n);
    return 0;
}