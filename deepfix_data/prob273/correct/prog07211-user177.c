#include <stdio.h>
int main() {
    int n,i,j,k;
    scanf("%d",&n);
    for(i=1;i<=(n+1)/2;i++) {
        for(j=0;j<(n)/2-i;j++)
        printf(" ");
        for(k=(n+1)/2-i;k<=(n+1)/2;k++)
        printf("%d",k);
        printf("\n"); }
    for(i=1;i<n/2;i++) {
        for(j=1;j<=i;j++)
        printf(" ");
        for(k=i+1;k<=n/2;k++)
        printf("%d",k);
        printf("\n"); }
    return 0; }