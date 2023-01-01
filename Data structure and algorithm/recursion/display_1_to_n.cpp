#include <bits/stdc++.h>
using namespace std;
void f(int n){
    if (n==1){
        cout<<n<<" ";
        return ;
    }
    f(n-1);
    cout<<n<<" ";
}
int main(){
    int n;
    cin>>n;
    f(n);
}