#include<stdio.h>
void main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
   int j=0,k=0;
   for (int i=0;i<n;i++){
        if (arr[i]<0){
            j++;
        }
        else{
            for (int l=j;l>k;l--){
                int t=arr[l];
                arr[l]=arr[l-1];
                arr[l-1]=t;
            }
            j++;
            k++;
        }
   }
   for (int i=0;i<n;i++){
    printf("%d ",arr[i]);
   } 
}