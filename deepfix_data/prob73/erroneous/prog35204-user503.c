#include <stdio.h>
int main() {
    int n,m,i,j,k;int sum=0;int max=0;
    for (k=0;k<n;k++) {
        for (i=0;i<m;i++) {
            scanf("%d",&j);
            sum=sum+j; }
        if (sum>max) {
            max==sum; } }
    return 0; }
int n,m,i,j;
    scanf("%d%d\n",&n,&m);
    int line[n*m];
    for (i=0;i<n;i++) {
        for (j=0;j<m;j++) {
            scanf("%d",&line[i*m+j]); } }