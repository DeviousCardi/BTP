#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,a, i, j,k;
	scanf("%d",&n);
	a=2*n-1;
	for(i=1;i<=n;i++) {
	    for(k=1;k<=i;k++)
	    printf(" ");
	    j=1;
	  for(j=1;j<=a;j++) {
	    for(j=2;j<=a-1;j++)
	    printf(" ");
	    if (j==1)
	    printf("*");
	    if (j==a)
	    printf("*");
	    printf("\n"); } }
	return 0; }