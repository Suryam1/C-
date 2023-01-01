#include<iostream>
using namespace std;
int main()
{
    char a[50];
    cin.getline(a,50);
    int i,v=0,c=0,d=0,w=0;
    for (i=0;a[i]!='\0';i++)
    {
        if (a[i]>='a' && a[i]<='z')
        {
        if (a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u')
        v=v+1;
        else
        c=c+1;
        }
        else if (a[i]>='A' && a[i]<='Z')
        {
        if (a[i]=='A' || a[i]=='E' || a[i]=='I' || a[i]=='O' || a[i]=='U')
        v=v+1;
        else
        c=c+1;
        }
        if (a[i]>='0' && a[i]<='9')
        d=d+1;
        if (a[i]==' ')
        w=w+1;
    }
    cout<<"NO. of consonent "<<c<<" no of vowel "<<v<<endl;
    cout<<"no of digits "<<d<<endl;
    cout<<"no of sppaces "<<w<<endl;
    return 0;
}