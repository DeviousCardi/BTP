#include <stdio.h>
int main() {
    int n,m,i,j,b,s=0;
    int a[n];
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i=i+1) {
        s=0;
        for(j=0;j<m;j=j+1) {
           scanf("%d",&b);
           s=s+b; }
        a[i]=s; }
    for(i=0;i<n;i++)
      { printf("%d ",a[i]);}
    return 0; }