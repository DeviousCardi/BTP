#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,s,h;
	scanf("%d",&h);
	for(i=1; i<=h; i++) {
	    if(i<=h/2+1)
	        s=h/2-i+1;
	    else
	    s=i-h/2-1;
	 for(j=1; j<=s; j++) {
	    printf(" "); }
	 for(j=h/2+1; j=j; j--)
	 printf("*");
	 printf("\n"); }
	return 0; }