#include<stdio.h>

int main()
{
    int k;
    scanf("%d",&k);
    int suma=0,sumb=0,sumc=0;
    for (int i=0;i<k;i++){
        int sa=0,sb=0,sc=0;
        for (int i=0;i<3;i++){
            int a,b,c;
            scanf("%d %d %d",&a,&b,&c);
            if(i==0){
                sa=(b-a+1)*c;
            }
            else if(i==1){
                sb=(b-a+1)*c;
            }
            else{
                sc=(b-a+1)*c;
            }
        }
        suma=suma+sa;
        sumb=sumb+sb;
        sumc=sumc+sc;
    }
    int x=(suma+sumb+sumc)/3;
    printf("%d",x);
}