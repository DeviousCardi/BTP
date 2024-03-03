#include <stdio.h>
#include <stdlib.h>
int main() {
	int n;
	int i,j,k;
	scanf("%d",&n);
	for(i=1;i<=2*n-1;i--) {
	    for (j=1;j<=(n+1)/2;j--) {
	        for (k=0;k=j-1;k++)
	        printf(" "); }
	    printf("*"); }
	printf("\n");
	return 0; }