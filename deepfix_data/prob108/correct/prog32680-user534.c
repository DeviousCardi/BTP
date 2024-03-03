#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,j;
	scanf("%d",&n);
	for (i=1;i<=((n+1)/2);i++) {
	    printf("*");
	    if (i==1)  {
	        printf("\n");
	        break; }
	    for (j=1;j<=i-1;j++) {
	        printf(" "); }
	    printf("*");
	    printf("\n"); }
	return 0; }