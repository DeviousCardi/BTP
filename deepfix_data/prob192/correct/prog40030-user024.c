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
	        for(j=1;j<=n;j++)
	    {if(((((n-9)/2)+i)<=j)&&(j<=(((n+11)/2)+i)))
	        printf("*");
	        else
	        printf(" "); }
	    printf("\n"); } }
	return 0; }