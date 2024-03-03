#include <stdio.h>
int main()
{     int i=3;
     int t1,t2,n,t[i];
 scanf("%d%d%d",&t1,&t2,&n);
 for( i=3;i<=n;i++) {
    t[i]=t[i-1]+t[i-2]-2; }
    printf("%d",t[i]);
    return 0; }