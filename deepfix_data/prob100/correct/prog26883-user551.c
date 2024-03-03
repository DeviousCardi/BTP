#include<stdio.h>
#include<limits.h>
int main() {
    int m,n,i,j,p=INT_MIN,k,max=INT_MAX;
    scanf("%d %d",&n,&m);
    for(i=1;i<=m;i++) {
        for(j=1;j<=n;j++) {
            scanf("%d",&k);
            if(k>p) {
                p=k; } }
        if(k<max) {
            max = k; } }
    printf("%d",max);
    return 0; }