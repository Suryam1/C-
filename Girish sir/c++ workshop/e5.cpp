#include<iostream>
using namespace std;
const double pi=3.14159;
int main(){
    int r;
    cin>>r;
    cout<<"Diameter:"<<2*r<<endl;
    cout<<"Circumference:"<<pi*(2*r)<<endl;
    cout<<"Area"<<pi*(r*r)<<endl;
    return 0;
}