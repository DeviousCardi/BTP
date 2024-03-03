#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,j,i,first,last;
    scanf("%d",&n);
    j=1;
	for(i=1;i<=n;i++) {
	    first=n-1;last=n;
	    if(i==1) {
	        for(j=1;j<n;j++)printf(" ");
	        printf("*\n"); }
	    else if(i==n) {
	        for(j=1;j<=(2*n)-1;j++)
	        printf("*");
	        printf("\n"); }
	    else {
	        for(j=1;j<=last;j++) {
	            if(j==first || j==last) printf("*");
	            else printf(" "); }
	        printf("\n");
	        first--;
	        last++; } }
return 0;}