#include <stdio.h>
int main() {
    int n,m,i,j,b,s=0;
    int a[m];
    scanf("%d %d",&n,&m);
    for(i=1;i<=n;i=i+1) {
        s=0;
        for(j=1;j<=m;j=j+1) {
           scanf("%d",&b);
           s=s+b; }
        a[i]=s;printf("%d\n",a[0]); }
    return 0; }