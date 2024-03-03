#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,k,n;
	scanf ("%d",&n);
	for(i=0;i<n/2;i++) {
	    for(j=0;j<=n/2;j++) {
	        if(j==(n/2-i)||(j==n/2))
	        printf("*");
	        else printf(" "); }
	    printf("\n"); }
	    for(i=0;i<n-n/2;i++) {
	        for(j=0;j<=n/2;j++) {
	            if((j==i)||(j==n/2))
	            printf("*");
	            else printf(" "); }
	        printf("\n"); }
	    return 0; }