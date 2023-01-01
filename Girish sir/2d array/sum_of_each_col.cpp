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
    { int sum=0;
        for (j=0;j<r;j++)
        {
            sum=sum+a[j][i];
            cout<<a[j][i]<<" ";
        }
        cout<<"sum of col "<<i+1<<" "<<sum<<endl;
    }
    return 0;
}