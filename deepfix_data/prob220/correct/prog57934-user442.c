#include <stdio.h>
#include <stdlib.h>
int main() {
    int n, i, j;
    scanf("%d", &n);
    int k=0;
    for(i=1; i<=n; i++) {
        if(i==n)
        break;
        for(j=1; j<=2*n-1; j++) {
            if((j==( n + k)) || (j==( n - k))) {
                    printf("*"); }
            else {
                    printf(" "); } }
        k++;
        printf("\n"); }
    if(i==n) {
        for(j=1; j<=2*n-1; j++) {
            printf("*"); } }
	return 0; }