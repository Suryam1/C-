#include<iostream>
using namespace std;
int main()
{
    char a[50];
    cin.getline(a,50);
    int i;
    for (i=0;a[i]!='\0';i++)
    {
        if (a[i]>='a' && a[i]<='z')
        a[i]=a[i]-32;
        else if (a[i]>='A' && a[i]<='Z')
        a[i]=a[i]+32;
    }
    cout<<a<<endl;
    return 0;
}