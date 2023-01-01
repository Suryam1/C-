 #include <bits/stdc++.h>
 using namespace std;
void SelectionSort(int *a,int n){
    for (int i=0;i<n;i++){
        int min=a[i];
        int x=i;
        for (int j=i+1;j<n;j++){
            if (min>a[j]){
                min=a[j];
                x=j;
            }
        }
        swap(a[i],a[x]);
    }
}
 int main(){
     int n=9;
     int a[]={9,7,5,8,6,4,2,3,1};
     SelectionSort(a,n);
     for (int i=0;i<n;i++){
         cout<<a[i]<<" ";
     }
     cout<<endl;
 }