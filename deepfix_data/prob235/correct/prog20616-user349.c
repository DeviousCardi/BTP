#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,i,j,k,l,m;
    scanf("%d", &n);
    for (i=1; i<=(n+1)/2; i++) {
        for (j=(n+1)/2-i;j>0;j--)
        printf(" ");
        for (k=(n+1)/2-i+1;k<=(n+1)/2+i-1&&k>1;k++)
        printf("%d",k);
        printf("\n");
        for (l=1; l<=i-1; l++)
        printf(" "); {
            for (m=i; m<=n+1-i; m++)
            printf("%d", m%10);
            printf("\n"); } }
    return 0; }