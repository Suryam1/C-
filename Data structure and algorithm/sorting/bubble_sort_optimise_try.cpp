#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    for (int i=0;i<n-1;i++){
        bool flag=false;
        for (int j=0;j<n-1-i;j++){
            if (a[j]>a[j+1])
            {
                flag=true;
            swap(a[j],a[j+1]);
            }
            if (flag==false)
            break;
            for (int i=0;i<n;i++){
            cout<<a[i]<<" ";
            }
            cout<<endl;
        }
    }
    for (int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}