#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,n;
	scanf("%d",&n);
	for (i=1;i<=n;i++){
	    for (j=1;j<=(n+1)/2;j++){
	        printf("%d",j%10); }
	    printf("\n"); }
	return 0; }