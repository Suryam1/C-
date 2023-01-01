#include<iostream>
using namespace std;
int main()
{
    int i=1;
    for (i=1;i<=3;i++)
    {
        int j=1;
        for (j=1;j<=3;j++)
        {
            if (i==2)
            {
                break;
            }
            cout<<"i= "<<i<<" j= "<<j<<endl; 
        }
    }
    return 0;
}