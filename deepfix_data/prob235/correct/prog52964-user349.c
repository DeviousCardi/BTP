#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,i,j,k;
    scanf("%d", &n);
    for (i=1; i<=(n+1)/2; i++) {
        for (j=(n+1)/2-i;j>0;j--)
        printf(" ");
        for (k=(n+1)/2-i+1;k<=(n+1)/2+i-1&&k>1;k++)
        printf("%d",k);
        printf("\n"); }
printf("\b\b");
        for (i=1; i<=(n+1)/2;i++) {
        for (j=1; j<=i-1; j++)
        printf(" "); {
            for (k=i; k<=n+1-i; k++)
            printf("%d", k%10);
            printf("\n"); } }
    return 0; }