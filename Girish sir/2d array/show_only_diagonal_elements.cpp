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
    for (int i=0;i<r;i++)
    {
        for (j=0;j<c;j++)
        {
            if (i==j)
            cout<<a[i][j]<<" ";
            else if (i+j==n-1)
            cout<<a[i][j]<<" ";
            else
            cout<<"\t";
            
        }
        cout<<endl;
    }
    return 0;
}