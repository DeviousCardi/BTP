#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,j;
	scanf("%d",&n);
	for (i=1;i<=n;i++){
	    for(j=1;j<=n;j++){
	    printf("*");}
	    printf("\n");
	    for(j=i;j<(n+1)/2;j++){
	        printf(" "); } }
	return 0; }