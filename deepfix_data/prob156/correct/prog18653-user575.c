#include<stdio.h>
int main() {
    int n,m,i,j,a[1000],t=0,s,k=0;
    scanf("%d %d",&n,&m);
    for(i=1;i<=n;i++) {
        for(j=1;j<=m;j++) {
            scanf("%d",&k);
            s=t+k;
            t=k; }
        a[i]=s;
        printf("%d\t",a[i]); }
        return 0; }