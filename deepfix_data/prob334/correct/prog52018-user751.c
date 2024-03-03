#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,k,n,m;
	scanf("%d%d",&n,&m);
	for(i=1;i<=n;i++) {
	    for(j=1;j<=n-i;j++) {
	        printf(" "); }
	    for(k=1;k<=m-2*n+2*i;k++) {
	        printf("%d",(i+k-1)%10); }
	    printf("\n"); }
	return 0; }