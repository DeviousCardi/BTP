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
    for(i=n/2; i<=n; i++) {
        for(j=1; j<=n; j++) {
            if(j==n || j==i)
            printf("*");
            else
            printf(" "); }
        printf("\n"); }
    return 0; }