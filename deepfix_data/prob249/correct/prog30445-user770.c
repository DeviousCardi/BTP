#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,j, n;
    scanf("%d", &n);
    for(i=0; i<n/2; i++) {
        for(j=1; j<=n; j++) {
        if(j==n || j==n-i)
        printf("*");
        else
        printf(" "); }
    printf("\n");}
    int m;
    for(i=1; i<=n/2+1; i++) {
        for(j=1; j<=n; j++) {
            if(j==n || j==i+n-2*(n/2))
            printf("*");
            else
            printf(" "); }
        printf("\n"); }
    return 0; }