#include <stdio.h>
int main() {
    int i,a1,a2,n,a,b,c ;
    scanf("%d%d%d",&a1,&a2,&n);
    for(i=3;i<=n;i++) {
       c=a1;
       b=a2;
       a =b+c-2;
       a=b;
       b=c;
    printf("%d",a); }
    return 0; }