#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,a, i, j;
	scanf("%d",&n);
	a=2*n-1;
	for(i=1;i<=a;i++) {
	    j=1;
	  for(j=1;j<=i;j++) {
	    for(j=2;j<=i-1;j++)
	    printf(" ");
	    if (j==1)
	    printf("*");
	    if (j==i)
	    printf("*");
	    printf("\n"); } }
	return 0; }