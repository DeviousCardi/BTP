#include <stdio.h>
int main(){
    int i,n,a1,a2,Tn,Tn1,Tn2;
    scanf("%d %d %d",&a1,&a2,&n);
    Tn1=a1;
    Tn2=a2;
    for(i=3;i<=n;i++) {
     Tn=Tn1+Tn2-2;
     Tn1=Tn2;
     Tn2=Tn; }
    printf("%d",Tn);
    return 0; }