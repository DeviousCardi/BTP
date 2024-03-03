#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,j, n;
    scanf("%d", &n);
    for(i=0; i<n/2; i++) {
        for(j=1; j<=n/2; j++) {
        if(j==n/2 || j==n/2-i)
        printf("*");
        if(j<n/2 || j>n/2-i)
        printf(" "); }
    printf("\n");}
    return 0; }