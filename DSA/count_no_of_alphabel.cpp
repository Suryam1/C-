#include<iostream>
using namespace std;
bool check(int a[],int b[])
{
    for (int i=0;i<256;i++)
    {
        if (a[i]!=b[i])
        return false;
    }
    return true;
}
int main()
{
    string str1,str2;
    int x;
    int a1[256]={0},b1[256]={0};
    getline (cin,str1);
    getline (cin,str2);
    x=str1.length();
    for (int i=0;i<x;i++)
    {
        int a,b;
        a=static_cast<int>(str1[i]);
        b=static_cast<int>(str2[i]);
        a1[a]=a1[a]+1;
        b1[b]=b1[b]+1;
    }
    bool t;
    t=check(a1,b1);
    if (t)
    cout<<"Anagram";
    else
    cout<<"Not Anagram";
    return 0;
}