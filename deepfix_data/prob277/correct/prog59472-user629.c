#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,i,j,k;
    scanf("%d", &n);
    for(i=1;i<n/2;i++) {
        for(j=1;j<i;j++)
        printf(" ");
        for(j=0;j<=(n-(2*i));j++)
        printf("*");
        printf("\n"); }
	k=(n+1)/2;
	for(i=1;i<=k;i++) {
	    for(j=1;j<=(k-i);j++)
	    printf(" ");
	    for(j=1;j<=((2*i)-1);j++)
	    printf("*");
	    printf("\n"); }
	return 0; }