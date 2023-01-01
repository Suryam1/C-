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
    for (i=0;i<c;i++)
    { int max=0;
        max=a[0][i];
        for (j=0;j<r;j++)
        {
            cout<<a[j][i]<<" ";
            if (a[j][i]>max)
            max=a[j][i];
        }
        cout<<"max is "<<max<<endl;
    }
    return 0;
}