#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,n,k;
	scanf("%d",&n);
	for(i=1;i<=n;i++) {
	    for(j=1;j<=i && i<=(n+1)/2;j++) {
	        if(i%j==0 ||i%j==i)
	        printf("*");
	        else
	        printf("\t"); }
	    for(k=1;k<=(n-i+1) && i>(n+1)/2;k++) {
	        if(k==1 || k==(n-i+1))
	        printf("*");
	        else
	        printf("\t"); }
	    printf("\n"); }
	return 0; }