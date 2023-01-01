#include <bits/stdc++.h>
using namespace std;
vector<int> f(vector<int> a,int n,int k)
{
    vector<int> b;
    for(int i = 0; i < n; i++) if(a[i]<k) b.push_back(a[i]);
    return b;
}
int main()
{
    int testcase;
                cin >> testcase;
                while(testcase--){
                    int N;
                    cin >> N;
                    // Declaring vector
                    vector<int> a(N);
                    // Taking vector element input
                    for(int i = 0;i<N;i++){
                        cin>>a[i];
                    }
                    int k;
                    cin>>k;
                    vector<int>result = f(a,N,k);
                    for(auto i:result)
                    {
                        cout<<i<<" ";
                    }
                    cout<<endl;
                }
                return 0;
}