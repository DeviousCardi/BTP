#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,j,n;
    for(i=0; i<n/2; i++)
    for(j=1; j<=n; j++)
    {{if(j==n || j==n-i)
    printf("*");
    else
    printf(" ");}
    for(i=1; i<=n/2; i++)
    {for(j=1; j<=n; j++)
    if(j==n || j==i)
    printf("*");
    else
    printf(" ");}}
    return 0; }