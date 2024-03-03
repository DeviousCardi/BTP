#include <stdio.h>
#include <stdlib.h>
int main() {
    int n, i, j;
    scanf("%d", &n);
    for (i=1; i<=n; i++) {
        if ((i==1)||(i==n)) {
            for (j=1; j<=n+1-i ; j++) {
                printf("*"); }
            if (i==1) {
                printf("\n"); } }
        else
        printf("*");
        for (j=1; j<=n-i-1; j++) {
            printf(" "); }
        printf("*");
        printf("\n"); }
	return 0; }