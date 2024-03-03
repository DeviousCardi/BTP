#include <stdio.h>
#include <stdlib.h>
int main() {
	int n, i, j;
	scanf("%d",&n);
	for(i=n;i>=1;i--) {
	    for(j=1;j<i;j++)
	        printf(" ");
	    for(j=0;j<2*(n-i)+1;j++)
	        printf("%d",(i+j)%10);
	    printf("\n"); }
	return 0; }