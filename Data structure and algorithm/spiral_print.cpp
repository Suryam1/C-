#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int a[n][m];
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    int rs=0,re=n,cs=0,ce=m,c=0;
    while (c<(n*m)){
        for (int i=rs;i<re;i++){
            c++;
            cout<<a[i][cs]<<" ";
        }
        cs++;
        for (int i=cs;i<ce;i++){
            c++;
            cout<<a[re-1][i]<<" ";
        }
        re--;
        for (int i=re-1;i>=rs;i--){
            c++;
            cout<<a[i][ce-1]<<" ";
        }
        ce--;
        for (int i=ce-1;i>=cs;i--){
            c++;
            cout<<a[rs][i]<<" ";
        }
        rs++;
    }
}