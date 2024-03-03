#include <stdio.h>
#include <stdlib.h>
int main() {
    int n, i, j,k,l;
    scanf("%d", &n);
    for(i=0,k=n;i<n;++i,--k) {
        if(i==0) {
            for(j=0;j<2*n-1;++j)
            printf("*");
            printf("\n"); }
        else if (i==n-1) {
            for(l=2*n-3;l>0;--l)
            printf(" ");
            printf("*"); }
        else {
            for(j=0;j<i;++j)
            printf(" ");
            printf("*");
            for(l=2*k-3;l>0;--l)
            printf(" ");
            printf("*\n"); } }
	return 0; }