#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,n;
	scanf ("%d",&n);
	for (i=0;i<n;i++) {
	    for (j=(n-1)/2;j>0;j--) {
	     if (i==j) printf("*");
	     if (i!=j) printf(" ");
	     if ((i+j)==(n)) printf("*"); }
	    printf ("*\n"); }
  return 0; }