#include <stdio.h>
#include <stdlib.h>
void foo(int **p){
    for (int i=0;i<4;i++){
        **(p+i)=i+1;
    }
    for (int i=0;i<4;i++){
        printf("%d ",**(p+i));
    }
    printf("\n");
}
int main(){
    // int *p;
    // p= (int*)calloc(4,sizeof(int));
    // for (int i=0;i<4;i++){
    //     printf("%d ",*(p+i));
    // }
    // printf("\n");
    // foo(p);
    // for (int i=0;i<4;i++){
    //     printf("%d ",*(p+i));
    // }
    // printf("\n");
    
}