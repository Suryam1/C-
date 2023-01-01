 #include <bits/stdc++.h>
 using namespace std;
void merge(int *a,int low,int mid,int high){
     int temp[high-low+1];
     int i=low,j=mid,k=0;
     while (i<=mid && j<=high){
         if (a[i]>a[j]){
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
     for (int i=low;i<high;i++){
         a[i]=temp[i-low];
     }
 }
void mergeSort(int *a,int low,int high){
     if (low<high){
         int mid=(low+high)/2;
         mergeSort(a,low,mid-1);
         mergeSort(a,mid,high);
         merge(a,low,mid,high);
     }
 }
 int main(){
     int a[]={9,7,5,8,6,4,2,3,1};
     mergeSort(a,0,9);
     for (int i=0;i<9;i++){
         cout<<a[i]<<" ";
     }
     cout<<endl;
 }