#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,n,y;
	scanf("%d",&n);
	for(i=1;i<=n;i=i+1) {
	 for(j=1;j<=2*n-1;j=j+1) {
	       y=y-1;
	       printf("*"); }
	   printf("\n"); }
	return 0; }