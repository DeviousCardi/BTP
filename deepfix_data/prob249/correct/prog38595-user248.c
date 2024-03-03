#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,j,k;
	scanf("%d",&n);
	for(i=1;i<=n;i++)  {
	    if(i==1 || i==n) {
	        printf("*");
	    }   else  {
	    for(j=1;j<=2;j++)  {
	        printf("*");
	    }  for(k=1;k<=i;k++) {
	        printf(" "); }
	    }   printf("\n"); }
	return 0; }