#include <stdio.h>
#include <stdlib.h>
int main() {
	int x,i,j,k,l,m,n;
	scanf ("%d",&x);
    for (i=1;i<=(x-1)/2;i++) {
	    for (j=(x-1)/2-i;j>=1;j--) {
	       printf(" "); }
	    for (k=1;k<=2*i-1;k=k+1) {
	       printf("*"); }
	    printf("\n"); }
	return 0; }