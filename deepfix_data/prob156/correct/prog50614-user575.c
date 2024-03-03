#include<stdio.h>
int main() {
    int n,m,i,j,a[1000],t=0,s=0,k;
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++) {
        for(j=0;j<m;j++) {
            scanf("%d",&k);
            s=t+k;
            t=k; }
        a[i]=s;
        printf("%d\t",a[i]); }
        return 0; }