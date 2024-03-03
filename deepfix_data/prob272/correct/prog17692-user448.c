#include <stdio.h>
int main(){
    int a1,a2,n,Tn,Tm,i;
    scanf("%d%d%d",&a1,&a2,&n);
    if (n==1){
        Tn=a1; }
    if (n==2){
        Tn=a2; }
    for (i=1;i<=n-2;i++,a1=a2,a2=Tn){
        Tn=a2+a1-2; }
 printf("%d",Tn);
    return 0; }