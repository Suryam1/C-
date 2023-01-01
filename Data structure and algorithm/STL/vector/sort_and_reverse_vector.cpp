#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
vector<int> f1(vector<int>v)
{
   sort(v.begin(),v.end());
    return v;
}
vector<int> f2(vector<int>v)
{
     reverse(v.begin(), v.end());
    return v;
}
int main() {
                int t;
                cin>>t;
                while(t--)
                {
                    int n;
                    cin>>n;
                    vector<int>v;
                    for(int i=0;i<n;i++)
                    {
                        int x;
                        cin>>x;
                        v.push_back(x); //Input vector element
                    }
                    v=f1(v); //sort and store in v
                   for(auto x:v)
                   cout<<x<<" "; //print elements of v
                   cout<<endl;
                   v=f2(v); //reverse v and store it in v
for(auto x:v)
                   cout<<x<<" "; //print elements of v
                   cout<<endl;
                }
                return 0;
}