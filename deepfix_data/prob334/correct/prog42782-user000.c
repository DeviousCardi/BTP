#include <stdio.h>
#include <stdlib.h>
int main() {
	int m,n;
	int i,j,k;
	scanf("%d ",&m);
	scanf("%d",&n);
	for(i=1;i<=m;i++) {
	    for(j=1;j<=m-i;j++) {
	        printf(" "); }
	    for(k=i;k<=n-2*(m-i)+i;k++) {
	        printf("%d",k%10); }
	    printf("\n"); }
	return 0; }