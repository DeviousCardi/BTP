#include <stdio.h>
#include <stdlib.h>
int main() {
	int n;
	scanf("%d",&n);
	int l,z=0;
	l=n;
	int i,j,k;
	for(i=1;i<=n;i++) {
	    for(k=n;k>i;k--) {
	        printf(" "); }
	    for(j=1;j<=((2*i)-1);j=j+2) {
	        z=l;
	        printf("%d",z);
	        z++; }
	    z=0;
	    l=l-1;
	    printf("\n"); }
	return 0; }