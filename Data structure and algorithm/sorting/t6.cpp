 #include <bits/stdc++.h>
 using namespace std;
void BubbleSort(int *a,int n){
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            if (a[j]>a[j+1]){
                swap(a[j],a[j+1]);
            }
        }
    }
}
 int main(){
     int n=9;
     int a[]={9,7,5,8,6,4,2,3,1};
     BubbleSort(a,n);
     for (int i=0;i<n;i++){
         cout<<a[i]<<" ";
     }
     cout<<endl;
 }