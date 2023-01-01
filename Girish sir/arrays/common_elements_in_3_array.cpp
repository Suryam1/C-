#include<iostream>
using namespace std;
int main()
{
    int n,m,l;
    cin>>n>>m>>l;
    int a[n],b[m],c[l];
    for (int i=0;i<n;i++)
    cin>>a[i];
    for (int j=0;j<m;j++)
    cin>>b[j];
    for (int k=0;k<l;k++)
    cin>>c[k];
    int a1,a2,a3;
    int i;
    for (i=0;i<n;i++)
    {
        a1=a[i];
        for (int j=0;j<m;j++)
        {
            a2=b[j];
            if (a1==a2)
            {
                int k;
                for (k=0;k<n;k++)
                {
                    a3=c[k];
                    if (a1==a2 && a1==a3)
                    cout<<"common is "<<a3<<endl;
                }
            }
        }
    }
    return 0;


}