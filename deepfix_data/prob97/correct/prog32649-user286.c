#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,n,j,k,spc;
    scanf("%d", &n);
    k=n;
    spc=n-1;
    for(i=1;i<=n;i++) {
        for(j=1;j<=spc;j++) {
            printf(" "); }
        for(j=k-i;j<=k+i;j++) {
            printf("%d", j); }
        spc--;
        printf("\n"); }
     return 0; }