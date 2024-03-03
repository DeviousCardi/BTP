#include <stdio.h>
#include <stdlib.h>
int main() {
	int height;
	scanf("%d",&height);
	int i,j,k;
	int n=height;
	for(i=1;i<=n;i++) {
	    j=n-i;
	    for(j=n-i;j>0;j--) {
	        printf("\t"); }
	    for(k=1;k<=i;k++) {
	        printf("%d",j+k); } }
	return 0; }