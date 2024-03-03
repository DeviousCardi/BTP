#include <stdio.h>
int main() {
    int n,i,
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        for(j=0;j<n/2;j++)
        if(j==n/2-i)
        printf("*");
        else
        printf(" ");
        printf("\n"); }
    return 0; }