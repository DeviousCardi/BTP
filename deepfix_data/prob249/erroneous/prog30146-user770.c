#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,j, n;
    sacnf("%d", &n);
    for(i=0; i<n; i++)
    for(j=1; j<=n; j++)
    if(i==0)
    printf("*");
    else {
        if(j==n; j==n-i)
        printf("*");
        else
        printf(" "); }
    return 0; }