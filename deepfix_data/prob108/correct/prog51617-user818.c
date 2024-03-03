#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,j,k,med;
	scanf("%d",&n);
	med=(n+1)/2;
	for(i=1;i<=n;i++) {
	    k=(med-abs(med-i));
	    for(j=1;j<=k;j++) {
	        if((j==1)||(j==k))
	        printf("*");
	        else
	        printf(" "); }
	    printf("\n"); }
	return 0; }