#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,j,k;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
	    for(j=1;j<=2*n-1;j++){
	        printf("*"); }
	    printf("\n");
	    for(k=1;k<i;j++){
	        printf(" "); } }
	return 0; }