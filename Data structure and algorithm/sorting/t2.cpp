 #include <bits/stdc++.h>
 using namespace std;
void merge(int *a,int low,int mid,int high){
     int temp[high-low+1];
     int i=low,j=mid+1,k=0;
     while (i<=mid && j<=high){
         if (a[i]>=a[j]){
             temp[k]=a[j];
             k++;
             j++;
         }
         else{
             temp[k]=a[i];
             k++;
             i++;
         }
     }
     while (i<=mid){
         temp[k]=a[i];
         k++;
         i++;
     }
     while (j<=high){
         temp[k]=a[j];
         k++;
         j++;
     }
     for (int i=low;i<=high;i++){
         a[i]=temp[i-low];
     }
 }
void mergeSort(int *a,int low,int high){
     if (low<high){
         int mid=(low+high)/2;
         mergeSort(a,low,mid);
         mergeSort(a,mid+1,high);
         merge(a,low,mid,high);
     }
 }
 int main(){
     int n=9;
     int a[]={9,7,5,8,6,4,2,3,1};
     mergeSort(a,0,n-1);
     for (int i=0;i<n;i++){
         cout<<a[i]<<" ";
     }
     cout<<endl;
 }