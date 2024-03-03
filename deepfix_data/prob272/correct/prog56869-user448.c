#include <stdio.h>
int main(){
    int a1,a2,n,Tn,Tm,i;
    scanf("%d%d%d",&a1,&a2,&n);
    if (n==1){
        Tm=a1; }
    if (n==2){
        Tm=a2; }
    for (i=3;i<=n;i++,a1=Tn,a2=Tm){
        Tn=a2+a1-2;
        Tm=Tn+a2-2; }
 printf("%d",Tm);
    return 0; }