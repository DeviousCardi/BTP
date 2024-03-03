#include <stdio.h>
int main() {
    int n,m,i,j,b,s=0;
    scanf("%d %d\n",&n,&m);
    int a[n];
    for(i=0;i<n;i=i+1) {
        s=0;
        for(j=0;j<m;j=j+1) {
           scanf("%d",&b);
           s=s+b; }
        a[i]=s; }
    for(i=0;i<n;i++)
      { printf("%d ",a[i]);}
    return 0; }