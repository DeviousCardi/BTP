#include <stdio.h>
#include <stdlib.h>
int main() {
    int n, i, j, k, l;
    scanf("%d",&n);
    for(i=1; i<=n-1; i=i++) {
        printf(" "); }
    printf("*\n");
    for(j=1; j<=n-2; j=j++) {
        for(k=1; k<=6-2*j; k=k+2) {
            printf(" "); }
        printf("*");
        for(l=1; l<=2*j+3; l=l+1) {
            printf(" "); }
        printf("*\n"); }
	return 0; }