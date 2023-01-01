#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter digit:"<<endl;
    int n;
    cin>>n;
    int i;
    i=n;
    while (i>0)
    {
        int j=1;
        while (j<=i)
        {
            cout<<"*";
            j=j+1;
        }
        i=i-1;
        cout<<endl;
    }
}