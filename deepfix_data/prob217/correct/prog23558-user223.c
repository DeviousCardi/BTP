#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
           long int S,n;
	       int a[n],i,j;
	       scanf("%ld",&S);
	       scanf("%ld",&n);
	       for(i=0;i<=n;i++) {
	           scanf("%d",a[i]); }
	       for(i=0;i<=n;i++) {
	           for(j=0;j<=n;j++) {
	               if((i+j)==S)
	               printf("(i,j)");
	               continue; } }
	return 0; }