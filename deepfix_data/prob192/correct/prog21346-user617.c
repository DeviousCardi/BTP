#include <stdio.h>
#include <stdlib.h>
int main() {
	int x,i,j,k;
	scanf ("%d",&x);
    for (i=1;i<=(x-1)/2;i++) {
	    for (j=i;j>=1;j--) {
	       printf(" "); }
	    for (k=1;k<=2*i-1;k=k+2) {
	       printf("*"); } }
	return 0; }