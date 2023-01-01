#include <bits/stdc++.h>
using namespace std;
vector<int> f(vector<int>v)
{
    vector<int> a;
    int max = v[0];
    for(int i = 1; i < v.size(); i++){
        if(max < v[i]){
            a.push_back(i);
            max = v[i];
        }
    }
    return a;
}
int main()
{
                int t;
                cin>>t;
                while(t--)
                {
                    int n;
                    cin>>n;
                   vector<int>v;
                   int i;
                   for(i=0;i<n;i++)
                   {
                       int k;
                       cin>>k;
                       v.push_back(k);
                   }
                   vector<int> result=f(v);
                   for(auto i:result)
                   {
                       cout<<i<<" ";
                   }
                   cout<<endl;
                }
                return 0;
}