#include <stdio.h>
#include <stdlib.h>
int main() {
    int n, i, j, k;
    scanf("%d", &n);
    for(i=0; i<n-1; i++) {
        for(j=0; j<(n-i-1); j++) {
            printf(" "); }
        printf("*");
        for(k=0; k<((2*i)-1); k++) {
            printf(" "); }
        if(i!=0) {
            printf("*"); }
        printf("\n"); }
    for(i=0; i<((2*n)+1); i++) {
        printf("*"); }
	return 0; }