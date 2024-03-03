#include <stdio.h>
int main(){
    int a1,a2,n,Tn,T1,T2;
    scanf("%d%d%d",&a1,&a2,&n);
    T1=a1,T2=a2;
    if(n>2){
        Tn=(Tn-1)+(Tn-2)-2;
     printf("%d",Tn);}
    if(n=1){printf("%d",T1);}
    if(n=2){printf("%d",T2);}
    return 0; }