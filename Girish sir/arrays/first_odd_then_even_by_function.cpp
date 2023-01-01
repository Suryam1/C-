#include<iostream>
using namespace std;
void f(int *a,int n,int x,int y)
{
    for (int i=1;i<=n;i++)
    {
        if (i%2!=0)
        {
            a[x]=i;
            x=x+1;
        }
        else
        {
            a[y]=i;
            y=y+1;
        }
    }
    for (int i=0;i<n;i++)
    cout<<a[i]<<" ";
}
int main()
{
    int n;
    cin>>n;
    int a[n]={0};
    int x=0;
    if (n%2==0)
    {
        int z=n/2;
        f(a,n,x,z);
    }
    else
    {
        int y=n/2+1;
        f(a,n,x,y);
    }
    return 0;
}