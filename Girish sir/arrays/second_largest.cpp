#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,x;
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++)
    cin>>a[i];
    sort(a,a+n);
    x=a[n-1];
    for (int i=n-2;n>=0;i--)
    {
    if (a[i]==x)
        {
        if (i==0)
        {cout<<"All elements are same "<<x<<endl;
        break;}
        else
        continue;}
    else
        {cout<<a[i];
        break;}
    }
    return 0;
}