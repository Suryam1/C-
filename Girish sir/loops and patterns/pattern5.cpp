#include<iostream>
using namespace std;
int main()
{
    int i=1,n;
    cin>>n;
    while (i<=n)
    {
        int j=0,k=0;
        while (j<n-i)
        {
            cout<<" ";
            j++;
        }
        while (k<i)
        {
            cout<<"*";
            k++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}