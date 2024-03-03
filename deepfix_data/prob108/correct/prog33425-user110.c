#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,n,k;
	scanf("%d",&n);
	for(i=1;i<=n;i++) {
	    if(i<=(n+1)/2) {
	     for(j=1;j<=i ;j++) {
	        if(j==1 || j==i)
	        printf("*");
	        else
	        printf(" "); } }
      if(i>(n+1)/2) {
	    for(k=1;k<=(n-i+1) ;k++) {
	        if(k==1 || k==(n-i+1))
	        printf("*");
	        else
	        printf(" "); } }
	    printf("\n"); }
	return 0; }