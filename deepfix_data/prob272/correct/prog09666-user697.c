#include <stdio.h>
int main() {
    int i,a1,a2,n,a,b,c;
    scanf("%d%d%d",&a1,&a2,&n);
    for(i=3;i<=n;i++) {
       c=a1;
       b=a2;
       a =b+c-2;
       b=a;
       c=b;
     if(i==n)
       printf("%d",b); }
    if(n==1)
    printf("%d",a1);
    if(n==2)
    printf("%d",a2);
    return 0; }