#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,h,k,n,m;
	scanf("%d",&h);
	for(i=h; i>=1; i=i-2) {
	    for(n=h;n>=i;n++)
	    {printf(" ");}
	     for(j=1; j<=i; j=j+1) {
	        printf("*"); }
	     printf("\n"); }
	for(k=1; k<=(h-2); k=k+2) {
	     for(m=-1; m<=k; m=m+1) {
	        printf("*"); }
	     printf("\n");
	     printf(" "); }
	return 0; }