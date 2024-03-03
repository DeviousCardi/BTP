#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,k,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++) {
	    for(k=n/2;k>0;k--) {
	        printf(" "); }
	    for(j=1;j<=2*i-1;j++) {
	        printf("%d",(j+i-1)%10); }
	    printf("\n"); }
	return 0; }