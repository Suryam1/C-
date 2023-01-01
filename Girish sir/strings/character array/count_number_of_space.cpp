#include<iostream>
using namespace std;
int main()
{
    char a[50];
    cin.getline(a,50);
    int i,count=0;
    for (i=0;a[i]!='\0';i++)
    {
        if (a[i]==' ')
        count++;
    }
    cout<<count<<endl;
    return 0;
}