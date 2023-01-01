#include<iostream>
using namespace std;
int main()
{
    int t,n,flag=1,i=2;
    cout<<"Enter number of test cases:"<<endl;
    cin>>t;
    while (t>0)
    {
        cout<<"Enter a number:"<<endl;
        cin>>n;
        for (;i<=n/2;i++)
        {
            if (n%i==0)
            {
                flag=0;
                break;
            }
        }
        if (flag==1)
        {
            cout<<n<<" IS A PRIME NUMBER"<<endl;
        }
        else
        {
            cout<<n<<" IS NOT A PRIME NUMBER"<<endl;
        }
        t--;
        i=2;
        flag=1;
    }
    return 0;
}