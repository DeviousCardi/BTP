#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,n;
	scanf("%d",&n);
	for(i=1;i<=n/2+1;i=i+1) {
	    for(j=2;j<=i;j++)
	        printf(" ");
	    for(j=n-2*i+2;j>=1;j=j-1)
	        printf("*");
	    printf("\n"); }
	for(i=1;i<=n;i=i+1){
	    for(j=n-2*i+2;j<=1;j=j+1){
	        printf("*"); }
	    printf("\n"); }
	return 0; }