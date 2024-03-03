#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,j,k,l,m;
	scanf("%d",&n);
	for(i=1;i<=n-1;i=i+1) {
	 for(j=1;j<=n-i;j=j+1) {
	   printf(" "); }
	   for(k=n-i+1;k<=n+i-1;k=k+1) {
	   if(k==n-i+1||k==n+i-1)
	    printf("*");
	    else
	   printf(" "); }
	     printf("\n"); }
	for(m=1;m<=2*n-1;m=m+1) {
	    printf("*"); }
	return 0; }