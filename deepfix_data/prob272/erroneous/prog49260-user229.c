#include <stdio.h>
int main(){
    int a1,a2,n,tn,i=3;
    scanf("%d%d%d",&a1,&a2,&n);
    if (n>2)
    for(i=3,i<=n,i++) {
     tn=a2+a1-2;
     a1=a2;
     a2=tn; }
    printf("%d",tn);
    return 0; }