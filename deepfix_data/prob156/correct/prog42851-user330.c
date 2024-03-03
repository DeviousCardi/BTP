#include <stdio.h>
int main() {
   int n,m,v=0,i,j,c=0;
   scanf("%d%d\n",&n,&m);
   int a[n];
   for( i=0;i<=n-1;i++){
       for( j=0;j<=m-1;j++){
           scanf("%d",&a[i]);
           a[i]=c+a[i];
           c=a[i];
       }printf("%d ",a[i]);
       scanf("\n"); }
    return 0; }