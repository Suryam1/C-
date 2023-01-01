#include <bits/stdc++.h>
using namespace std;
int f(vector<int> arr, int n){
    int max=0,count=0;
    for (int i=0;i<n;i++){
        if (arr[i]==1){
            count++;
            if (i==n-1 && max<count){
                max=count;
                count=0;
            }
        }
        else{
            if (max<count){
                max=count;
                count=0;
            }
        }
    }
    return max;
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