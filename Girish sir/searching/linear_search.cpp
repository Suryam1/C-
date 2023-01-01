#include<iostream>
using namespace std;
void f(int *a,int n,int z)
{
    int i;
    for (int i=0;i<n;i++)
    {
        if (z==a[i])
        {
            cout<<a[i]<<" is found at index "<<i<<endl;
            break;
        }
    }
    if (i==n)
    cout<<z<<" not found"<<endl;
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++)
    cin>>a[i];
    int z;
    cin>>z;
    f(a,n,z);
    return 0;
}