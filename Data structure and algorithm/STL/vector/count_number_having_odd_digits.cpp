#include <bits/stdc++.h>
using namespace std;
int f(vector<int> arr, int n){
    int count=0;
    for (int i=0;i<n;i++){
        string s=to_string(arr[i]);
        if (s.length()%2!=0)
        count++;
    }
    return count;
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