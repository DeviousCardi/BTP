#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,j, n;
    scanf("%d", &n);
    for(i=0; i<n; i++) {
        for(j=1; j<=n; j++)
         if(i==0 && j==n)
    printf("*");
    else {
        if(j==n || j==n-i)
        printf("*");
        else
        printf(" "); }
    printf("\n");}
    return 0; }