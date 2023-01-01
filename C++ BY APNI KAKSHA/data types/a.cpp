#include <iostream>
using namespace std;
int main(){
    int a=0,b=4,c=8,d=12;
    char ch='a';
    while (a<b<c<d){
        a++;
        b--;
        c++;
        d--;
    }
    cout<<ch<<a<<endl;
    return 0;
}
