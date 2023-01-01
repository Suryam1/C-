#include <iostream>
# include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a;
    string s="";
    while (n!=0)
    {
        a=n%2;
        s=s+to_string(a);
        //cout<<s;
        n=n/2;
    }
    reverse(s.begin(),s.end());
    cout<<s;
}