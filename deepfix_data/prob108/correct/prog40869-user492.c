#include <stdio.h>
int main() {
    int i, j,n;
scanf("%d",&n);
printf("*\n");
for(i=1;i<(n+1)/2;i++) {
    printf("*");
    for(j=1;j<i;j++)
    printf(" ");
    printf("*\n"); }
    return 0; }