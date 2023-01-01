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
    for (int i=0;i<n-2;i++)
    {
        for (int j=i+1;j<n-1;j++)
        {if (a[i]+a[j]==x)
        cout<<a[i]<<'+'<<a[j]<<'='<<x<<endl;}
    }
    return 0;
}