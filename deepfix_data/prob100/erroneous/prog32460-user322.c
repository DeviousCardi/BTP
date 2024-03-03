#include<stdio.h>
#include<limits.h>
int main() {
    int n,m;
    scanf("%d %d\n",n,m);
    int i,j,a[m+1],b[n+1];
    for(i=1;i<=m;i++){
        for(j=1;j<=n;j++){
            scanf("%d%d";&a[i],&b[j]);
            printf("%d%d",a[i],b[i]); } }
    return 0; }