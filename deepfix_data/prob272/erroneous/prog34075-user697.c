#include <stdio.h>
int main() {
    int i,a1,a2,n,T(n),ti,ti-1,ti-2;
    scanf("%d%d%d",&a1,&a2,&n);
    for(i=3;i<=n;i++) {
       ti-2=a1;
       ti-1=a2;
       ti =ti-1+ti-2-2;
       ti=ti-1;
       ti-1=ti-2; }
    printf("%d",n;
    return 0; }