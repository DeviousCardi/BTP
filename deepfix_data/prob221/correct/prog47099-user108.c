#include <stdio.h>
#include <stdlib.h>
int main() {
    int n, i, j;
    scanf("%d", &n);
    if (n<=0) {
        printf("Invalid Entry");
    } else
    for (i=1; i<=n; i++) {
        if ((i==1)||(i==n)) {
            for (j=1; j<=(2*n+1)-2*i; j++) {
                printf("*"); }
        } else
        for (j=1; j<i; j++) {
            printf(" "); }
        printf("*");
        for (j=1; j<=2*(n-i)-1; j-=2) {
            printf(" "); }
        printf("*"); }
	return 0; }