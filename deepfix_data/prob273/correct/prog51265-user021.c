#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,n;
	scanf("%d",&n);
	for(i=1;i<=(n+1)/2;i=i+1){
	     for(j=1;j<=i;j=j+1){
	       printf("%d",(n+1)/2-i); }
	    printf("\n"); }
	return 0; }