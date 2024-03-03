#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,n,k,t;
	scanf("%d",&n);
	for(i=1;i<=2*n-1;i++)
	       printf("*");
	       printf("\n");
	for(t=1;t<=n-1;t++) {
	      for(j=0;j<=t-1;j++)
	           printf(" ");
	           printf("*");
	        for(k=1;k<=n*2-t*2-3;k++){
	               printf(" ");
	               printf("*");}
	                printf("\n"); }
	return 0; }