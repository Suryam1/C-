#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter digit:"<<endl;
    int n;
    cin>>n;
    cout<<"1"<<endl;
    int i=1;
    while (i<n)
    {
        int j=0;
        while (j<=i)
        {
            if (j==0 or j==i)
            {
                cout<<i;
            }
            else
            {
                cout<<"0";
            }
            j=j+1;
        }
        i=i+1;
        cout<<endl;
    }
    return 0;
}