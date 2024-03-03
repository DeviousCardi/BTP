#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,j;
	scanf("%d",&n);
	for(i=1;i<=n/2+1;i++) {
	    for(j=1;j<=n/2+1;j++) {
	        if((j==n/2+1)||j==n/2-i+2)
	        printf("*");
	        else
	        printf(" "); }
	    printf("\n"); }
	for(i=1;i<=n/2;i++) {
	    for(j=1;j<=n/2;j++) {
	        if((j==i+1)||(j==n/2+1)
	        printf("*");
	        else
	        printf(" "); }
	    printf("\n"); }
	return 0; }