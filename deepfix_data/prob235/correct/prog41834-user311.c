#include <stdio.h>
#include <stdlib.h>
int main() {
	int h,i,j,k,l,m,n;
	scanf("%d",&h);
j=(h-1)/2;
	for(i=1;i<=(h+1)/2;i++) {
	    if (j>=0) {
	        for(k=1;k<=j;k++)
	        printf(" "); }
	   m=j+1; {
	            for(n=m;n<=h-j;n++)
	            printf("%d",n%10); }
	   m=m-1;
	    printf("\n");
	    j=j-1; }
    j=1;
    for(i=(h+3)/2;i<=h;i++) {
        for(k=1;k<=j;k++)
        printf(" ");
    m=j+1; {
            for(n=m;n<=h-m+1;n++)
            printf("%d",n%10); }
    printf("\n");
    j++; }
	return 0; }