#include <stdio.h>
#include <stdlib.h>
int main() {
	int h,i,j,k,l,m,n;
	scanf("%d",&h);
	j=(h-1)/2;
	for(i=1;i<=(h-1)/2;i++) {
	    if (j>=0) {
	        for(k=1;k<=j;k++)
	        printf(" "); }
	    for(m=j+1;m>0;m=m-1) {
	            for(n=m;n<=h-j;n++)
	            printf("%d",n); }
	    printf("\n");
	    j=j-1; }
	return 0; }