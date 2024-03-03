#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,s,h;
	scanf("%d",&h);
	for(i=h; i>=1; i--) {
	    if(i<=h/2+1)
	        s=h/2-i+1;
	    else
	    s=i-h/2-1;
	 for(j=1; j<=s; j++) {
	    printf(" "); }
	 for(j=j; j<=h/2+1; j++)
	 printf("%d",i%10);
	 printf("\n"); }
	return 0; }