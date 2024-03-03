#include <stdio.h>
#include <stdlib.h>
int main() {
    int n, i, j;
    scanf("%d", &n);
    for (i=1; i<=n; i++) {
        if ((i==1)||(i==n)) {
            for (j=1; j<n; j++) {
                printf(" "); }
            for (j=1; j<=2*(n-i)+1 ; j++) {
                printf("*"); }
            if (i==1) {
                printf("\n"); } }
        else if ((i>=2)&&(i<=(n-1))) {
            for (j=1; j<n; j++) {
                printf(" "); }
            printf("*");
            for (j=1; j<=n-i-1; j++) {
            printf(" "); }
            printf("*");
            printf("\n"); } }
	return 0; }