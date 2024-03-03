#include <stdio.h>
int main() {
    int n,i,m,j,max=0,sum;
    scanf("%d %d",&n,&m);
    int g[m];
    for(i=0;i<n;i++) {
        sum=0;
        for(j=0;j<m;j++) {
            scanf("%d",&g[j]);
            sum=sum+g[j]; }
        if(sum>max) {
            max=sum; } }
    printf("%d",max);
    return 0; }