#include<iostream>
using namespace std;
int main()
{
    int r,c;
    cin>>r>>c;
    int i,j,a[r][c];
    for (i=0;i<r;i++)
    {
        for (j=0;j<c;j++)
        {
            cin>>a[i][j];
        }
    }
    for (i=0;i<r;i++)
    { int max=0;
        max=a[i][0];
        for (j=0;j<c;j++)
        {
            cout<<a[i][j]<<" ";
            if (a[i][j]>max)
            max=a[i][j];
        }
        cout<<max<<endl;
    }
    return 0;
}