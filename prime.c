#include <stdio.h>
int main(){
    for (int i=n1;i<=n2;i++){
        int flag=0;
        for (int j=2;j<i;j++){
            if(i%j==0){
                flag=1;
                break;
            }
        }
        if (flag==0 && i!=1){
            printf("%d",i);
        }
    }
}