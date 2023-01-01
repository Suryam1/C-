#include <stdio.h>
void main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int k;
    scanf("%d",&k);
    for (int i=0;i<n;i=i+k){
        int l=0;
        for (int j=i;j<i+k;j++){
            if (j<(i+i+k)/2 && i+k<=n){
                int t=arr[j];
                arr[j]=arr[i+k-1-l];
                arr[i+k-1-l]=t;
                l++;
            }
            else if (j<(n+i)/2 && i+k>n){
                int t=arr[j];
                arr[j]=arr[n-1-l];
                arr[n-1-l]=t;
                l++;
            }
        }
    }
    for (int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}