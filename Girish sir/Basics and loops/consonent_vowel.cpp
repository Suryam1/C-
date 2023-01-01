#include<iostream>
using namespace std;
int main()
{
    char op;
    cout<<"Enter a character"<<endl;
    cin>>op;
    if (op>='A' && op<='Z')
    {
        if (op=='A' || op=='E' || op=='I' || op=='O' || op=='U')
        {
            cout<<"VOWEL"<<endl;
        }
        else{
            cout<<"CONSONANT"<<endl;
        }
    }
    else{
        cout<<"Not a character"<<endl;
    }
    return 0;
}