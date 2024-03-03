#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,m,i,j,k,r;
	scanf("%d %d",&n,&m);
	for(i=1;i<=n;i++) {
	     for(j=1;j<=n-i;j++) {
	          printf(" "); }
	    r=m-2*n+3*i-1;
	     for(k=i;k<=r;k++) {
	          printf("%d",k%10); }
	    printf("\n"); }
	return 0; }