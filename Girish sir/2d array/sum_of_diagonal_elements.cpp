#include<iostream>
using namespace std;
int main()
{
    int r,c,n;
    cin>>n>>r>>c;
    int i,j,a[r][c];
    for (i=0;i<r;i++)
    {
        for (j=0;j<c;j++)
        {
            cin>>a[i][j];
        }
    }
    int s1=0,s2=0;
    for (int i=0;i<r;i++)
    {
        for (j=0;j<c;j++)
        {
            if (i==j)
            s1=s1+a[i][j];
            if (i+j==n-1)
            s2=s2+a[i][j];
        }
    }
    cout<<s1<<" "<<s2<<endl;
    return 0;
}