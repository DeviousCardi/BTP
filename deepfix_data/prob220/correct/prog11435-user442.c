#include <stdio.h>
#include <stdlib.h>
int main() {
    int n, i, j;
    scanf("%d", &n);
    int k=0;
    for(i=1; i<=n; i++) {
        for(j=1; j<=i; j++) {
            if((j==(n+1)/2 + k) || j==(n+1)/2 - k) {
                printf("*");
                k++; } } }
	return 0; }