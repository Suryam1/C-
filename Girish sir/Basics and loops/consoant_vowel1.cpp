#include<iostream>
#include<cctype>
using namespace std;
int main()
{
    char op;
    cout<<"Enter character:"<<endl;
    cin>>op;
    if (isalpha(op))
    {
        switch(tolower(op))
        {
            case 'a':
                cout<<"You entered a vowel."<<endl;
                break;
            case 'e':
                cout<<"You entered a vowel."<<endl;
                break;
            case 'i':
                cout<<"You entered a vowel."<<endl;
                break;
            case 'o':
                cout<<"You entered a vowel."<<endl;
                break;
            case 'u':
                cout<<"You entered a vowel."<<endl;
                break;
            default:
                cout<<"You entered a consonant."<<endl;
        }
    }
    else{
        cout<<"You did not enter a letter."<<endl;
    }
    return 0;
}