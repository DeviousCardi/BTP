#include <stdio.h>
int main() {
   int n,m,v,c=0;
   scanf("%d%d\n",&n,&m);
   int a[n];
   for(int i=0;i<=n-1;i++){
       for(int j=0;j<=m-1;j++){
           scanf("%d",&a[i]);
           a[i]=c+a[i];
           c=a[i]; }
       scanf("\n"); }
    for(i=0;i<=n-2;i++){
        if(a[i]>=a[i+1])v=a[i];
        else v=a[i+1]; }
    printf("%d",v);
    return 0; }