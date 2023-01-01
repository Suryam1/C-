#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter a digit:"<<endl;
    int a;
    cin>>a;
    int sum=0;
    int count=1;
    if (a%2==0)
    {
        while (count<=a)
        {
            sum=sum+count;
            count=count+1;
        }
    }
    cout<<"Sum is:"<<sum<<endl;
    return 0;
}