#include<iostream>
using namespace std;
void input(int a[],int n)
{
    for (int i=0;i<n;i++)
    cin>>a[i];
}
void swap(int a[],int n)
{   int temp;
    for (int i=0;i<n/2;i++)
    {
        temp=a[i];
        a[i]=a[n-1-i];
        a[n-1-i]=temp;
    }
}
void display(int a[],int n)
{
    for (int i=0;i<n;i++)
    cout<<a[i]<<" ";
}
int main()
{
    int n,i,temp;
    cin>>n;
    int a[n];
    input(a,n);
    swap(a,n);
    display(a,n);
    return 0;
}