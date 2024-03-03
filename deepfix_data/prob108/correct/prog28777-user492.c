#include <stdio.h>
int main() {
    int i, j,n;
scanf("%d",&n);
printf("*\n");
for(i=1;i<(n/2);i++) {
    printf("*");
    for(j=0;j<(i-1);j++)
    printf(" ");
    printf("*\n"); }
for(;i<n;i++) {
    printf("*");
    for(j=(n-i-2);j>0;j--)
    printf(" ");
    printf("*\n"); }
printf("*");
    return 0; }