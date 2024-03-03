#include <stdio.h>
#include <stdlib.h>
int main() {
	int n, i, j, k;
	scanf("%d", &n);
	for(i=1; i<=(n/2)+1; i++) {
	    for(j=1; j<=((n/2)-i)+1; j++)
	        printf(" ");
	    printf("*");
	    for(k=1; k<=i-2;k++)
	        printf(" ");
	    if(i>1)
	        printf("*");
	    printf("\n"); }
	for(i=1; i<=n/2; i++) {
	    for(j=1; j<=i; j++)
	        printf(" ");
	    printf("*");
	    for(k=1; k<=((n/2)-3)+i; k++)
	        printf(" ");
	    if(i!=n/2)
	        printf("*");
	    printf("\n"); }
	return 0; }