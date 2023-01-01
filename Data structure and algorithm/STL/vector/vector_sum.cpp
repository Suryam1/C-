#include <bits/stdc++.h>
using namespace std;
int f(vector<int> arr, int n){
                 int sum = 0;
                 for(int &i : arr) sum+=i;
                 return sum;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n;++i){
        cin>>arr[i];
    }
    cout<<f(arr, n)<<endl;
    }
                return 0;
}