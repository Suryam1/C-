#include <bits/stdc++.h>
using namespace std;


long long binary(long long mid,vector<long long>v,long long n,long long m){
    for (long long i=0;i<n;i++){
        if (v[i]>mid){
            if ((v[i]-mid)>m){
                return 1;
            }
            else{
                m=m-(v[i]-mid);
            }
        }
    }
    if(m>0){
        return 0;
    }
    return 2;
}


long long least(vector<long long>v,long long n,long long m){
    long long max=-1;
    for (long long i=0;i<n;i++){
        if(max<v[i])
        max=v[i];
    }
    long long start=0,end=max,ans=-1;
    long long mid=(start+end)/2;
    while (start<=end){
        long long x=binary(mid,v,n,m);
        if(x==2){
            ans=mid;
            start=mid+1;
        }
        else if (x==1){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=(start+end)/2;
    }
    return ans;
}

int main() {
	long long n,m;
    cin>>n>>m;
    vector<long long> v;
    for (long long i=0;i<n;i++){
        long long x;
        cin>>x;
        v.push_back(x);
    }
    cout<<least(v,n,m)<<endl;
	return 0;
}