#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,k,n;
	scanf("%d",&n);
	if(i==1) { {
	    for(j=1;j<=2*n-1;j++)
	    printf("*"); }
	printf("\n"); }
	else {
	    for(i=2;i<=n-1;i++) { {
	        for(j=1;j<=i-1;j++)
	        printf(" "); }
	        printf("*"); {
	          for(k=1;k<=n-2;k++)
	          printf(" "); }
	        printf("*"); }
	    printf("\n"); }
	return 0; }