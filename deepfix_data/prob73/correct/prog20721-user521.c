#include <stdio.h>
int main() {
     int n,m,i,j,a[m],s[n],sum;
     scanf("%d%d",&n,&m);
     for(i=1;i<=n;i++) {
         sum=0;
         for(j=1;j<=m;j++) {
                scanf("%d",&a[j]);
             sum=sum+a[j]; }
         sum=s[i];
         printf("%d\n",s[i]); }
    return 0; }