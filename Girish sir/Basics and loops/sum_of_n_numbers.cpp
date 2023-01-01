#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter a digit:"<<endl;
    int a;
    cin>>a;
    int sum=0;
    int count=1;
    while (count<=a)
    {
        sum=sum+count;
        count=count+1;
    }
    cout<<"Sum of N numbers is:"<<sum<<endl;
    return 0;
}