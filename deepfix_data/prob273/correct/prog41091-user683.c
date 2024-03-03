#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,j,spc=0,f=1;
	scanf("%d", &n);
	for(i=1;i<=n;i++) {
	       for(j=spc;j<n/2;j++) {
	        printf(" "); }
	     for(j=n/2+1;j>=n/2+1-spc;j--) {
	        printf("%d", j); }
	     spc=spc+f;
	   if(spc==n/2) f=-1;
	 if((i!=1)&&(i!=n))  printf("*");
	    printf("\n"); }
	return 0; }