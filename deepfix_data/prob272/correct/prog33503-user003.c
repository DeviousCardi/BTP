#include <stdio.h>
int main(){
    int a1,a2,n,Tn,T1,T2,Ti;
    scanf("%d%d%d",&a1,&a2,&n);
    T1=a1,T2=a2;
    if(n==1){printf("%d",T1);}
    if(n==2){printf("%d",T2);}
    if(n>2){
    for(int i=2 ;i<n;i+1){
        Tn=Ti+(Ti-1)-2; }
    printf("%d",Tn); }
    return 0; }