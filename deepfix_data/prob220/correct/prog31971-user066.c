#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,j,i,k,l;
    scanf("%d",&n);
    j=1;
    for(k=1;k<=n;k++) {
        for(l=1;l<=n-k;l++)
        printf(" ");
        printf("*");
    for(i=1;i<2*k-3;i++) {
    printf(" "); }
    printf("*");
    printf("\n");
    j++; }
    for(i=1;i<=2*n-1;i++)
    printf("*");
	return 0; }