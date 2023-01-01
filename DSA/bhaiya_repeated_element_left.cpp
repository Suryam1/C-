#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    getline(cin,str);
    int a[256]={0};
    int temp,flag;
    for (int i=str.length()-1;i>=0;i--)
    {
        temp = ++a[str[i]];
        if (temp>1)
        flag=i; 
    }
    cout<<str[flag];
    return 0;
}