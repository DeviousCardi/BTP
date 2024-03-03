#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,a, i=1, j,k,l;
	scanf("%d",&n);
	a=2*n-1;
	for(l=1;l<=n;l++) {
	for(k=1;k<=a;k++)
	printf("*");
	printf("\n");
	for(i=1;i<=a;i++) {
	    if (i==l)
	    printf("*"); }
    for(j=a;j>=1;j--) {
        if (j==a-l)
        printf("*"); } }
	return 0; }