 #include <bits/stdc++.h>
 using namespace std;
void InsertionSort(int *a,int n){
    int key,j;
    for (int i=1;i<n;i++){
        key=a[i];
        j=i-1;
        while (j>=0 && a[j]>key){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
    }
}
 int main(){
     int n=9;
     int a[]={9,7,5,8,6,4,2,3,1};
     InsertionSort(a,n);
     for (int i=0;i<n;i++){
         cout<<a[i]<<" ";
     }
     cout<<endl;
 }