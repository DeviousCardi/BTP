#include <stdio.h>
#include <stdlib.h>
int main() {
    int n, i, j, k, l, m;
    scanf("%d",&n);
    for(i=1; i<=n-1; i=i++) {
        printf(" "); }
    printf("*\n");
    for(j=1; j<=n-2; j=j++) {
        for(k=1; k<=n-1-j; k=k+1) {
            printf(" "); }
        printf("*");
        for(l=1; l<=2*j-1; l=l+1) {
            printf(" "); }
        printf("*\n"); }
    if(n>1){
    for(m=1; m<=2*n-1; m=m++) {
        printf("*"); } }
	return 0; }