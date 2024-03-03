#include <stdio.h>
int main() {
     int t1,t2,n;
 scanf("%d%d%d",&t1,&t2,&n);
 int i=n,t[i];
 for( i=1;i<=n;i++) {
    t[i]=t[i-1]+t[i-2]-2; }
    printf("%d",t[i]);
    return 0; }