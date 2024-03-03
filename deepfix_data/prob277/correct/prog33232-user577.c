#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,i,j;
    scanf("%d",&n);
    for (j=1; j<=(n+1)/2; j++) {
        for (i=1; i<=(j-1); j++)
        printf(" ");
        for (i=1; i<=(n-2*(j-1)); i++)
        printf("*");
        printf("\n"); }
    for (j=2; j<=(n-1)/2; j++) {
        for (i=1; i<=(n-2*(j-1))/2; i++)
        printf(" ");
        for(i=1; i<=2*(j-1); i++)
        printf("\n"); }
    return 0; }