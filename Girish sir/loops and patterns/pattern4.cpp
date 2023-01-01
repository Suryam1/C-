#include<iostream>
using namespace std;
int main()
{
    int i=1,n;
    cin>>n;
    while (i<=n)
    {
        if (i==1 || i==n)
        {
            int j=1;
            while (j<=n)
            {
                cout<<"*";
                j++;
            }
            cout<<endl;
        }
        else
        {
            int k=1;
            while (k<=n)
            {
                if (k==1 || k==n)
                {
                    cout<<"*";
                }
                else
                {
                    cout<<" ";
                }
                k++;
            }
            cout<<endl;
        }
        i++;
    }
    return 0;
}