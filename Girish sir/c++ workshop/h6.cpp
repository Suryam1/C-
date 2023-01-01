#include<iostream>
using namespace std;
int main()
{
    int arr[5]={100,90,80,70,60};
    int *ptr=arr;
    cout<<*ptr<<" ";
    cout<<*(ptr+2)<<" ";
    for (int i=0;i<5;i++)
    cout<<*(ptr+i)<<" ";
    return 0;
}