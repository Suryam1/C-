 #include <bits/stdc++.h>
 using namespace std;
 int Partation(int *a,int low,int high){
     int x=low;
     int pivot=high;
     for (int i=low;i<high;i++){
         if (a[i]<a[pivot]){
             swap(a[i],a[x]);
             x++;
         }
     }
     swap(a[x],a[pivot]);
     return x;
 }
void QuickSort(int *a,int low,int high){
    int x;
    if (low<high){
        x=Partation(a,low,high);
        QuickSort(a,low,x-1);
        QuickSort(a,x+1,high);
    }
}
 int main(){
     int n=9;
     int a[]={9,7,5,8,6,4,2,3,1};
     QuickSort(a,0,n-1);
     for (int i=0;i<n;i++){
         cout<<a[i]<<" ";
     }
     cout<<endl;
 }