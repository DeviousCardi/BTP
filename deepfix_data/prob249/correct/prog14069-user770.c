#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,j, n;
    scanf("%d", &n);
    for(i=0; i<n/2; i++) {
        for(j=1; j<=n; j++) {
        if(j==n-1 || j==n-i)
        printf("*");
        if(j<n || j>n-i)
        printf(" "); }
    printf("\n");}
    for(i=n/2+1; i<=n; i++) {
        for(j=1; j<=n; j++) {
            if(j==n-1 || j==i)
            printf("*");
            if(j<n || j>i)
            printf(" "); }
        printf("\n"); }
    return 0; }