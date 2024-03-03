#include <stdio.h>
#include <stdlib.h>
int main() {
    int n, i, j, k;
    scanf("%d", &n);
    for(i=1; i<=n; i++) {
        for(j=1, k=i; j<=i; j++, k--) {
            if((k%2) == 0)
             printf("*");
            else
             printf("x"); }
    printf("\n"); }
    for(i=1; i<=n; i++) {
        for(j=n, k=1; j>=i; j--, k++) {
            if((k%2) == 0)
             printf("*");
            else
             printf("x"); }
    printf("\n"); }
	return 0; }