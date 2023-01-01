#include<iostream>
#include<vector>
using namespace std;
vector<int>f(int arr[],int n){
    vector<int>res(arr,arr+n);
    return res;
}
int main(){
    int t;
    cin>>t;
    while (t>0){
        int n;
        cin>>n;
        int arr[n];
        for (int i=0;i<n;i++)
        cin>>arr[i];
        vector<int>res=f(arr,n);
        for (int x:res){
            cout<<x<<" ";
        }
        cout<<endl;
        return 0;
    }
}