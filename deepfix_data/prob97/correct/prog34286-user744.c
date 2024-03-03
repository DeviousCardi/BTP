#include <stdio.h>
#include <stdlib.h>
int main() {
	int l,n,i,j,k;
	scanf("%d",&n);
	for(i=1; i<=n; i++) {
	    for(j=1; j<=(n-i); j++)
	    printf(" ");
	    l=n-i+1;
	    for(k=1; k<=(2*i)-1; k++)
	    printf("%d",(l++)%10);
	    printf("\n"); }
	    return 0; }