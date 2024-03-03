#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,n;
	scanf("%d", &n);
	for(i=1;i<=n;i++) {
	    if(i<=(n+1)/2) {
	    for(j=1;j<=n;j++) {
	        if(((((n+3)/2)-i)<=j)&&(j<=(((n-1)/2)+i)))
	        printf("*");
	        else
	        printf(" "); }
	        printf("\n"); }
	    else {
	    for(j=1;j<=n;j++) {
	        if(((((1-n)/2)+i)<=j)&&(j<=(((3*n+1)/2)-i)))
	        printf("*");
	        else
	        printf(" "); }
	    if(i<n)
	    printf("\n"); } }
	return 0; }