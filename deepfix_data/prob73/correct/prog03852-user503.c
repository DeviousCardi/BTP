#include <stdio.h>
int main() {
    int n,m,i,j,k;int sum=0;int max=0;
    scanf("%d%d\n",&n,&m);
    for (k=0;k<n;k++) {
        for (i=0;i<m;i++) {
            scanf("%d",&j);
            sum=sum+j;
            scanf("\n"); }
        if (sum>max) {
            max=sum; } }
    return 0; }