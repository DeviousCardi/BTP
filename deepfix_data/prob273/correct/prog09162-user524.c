#include <stdio.h>
#include <stdlib.h>
int main() {
    	int i,j,h,b;
	scanf("%d %d",&h,&b);
	for(i=1;i<=h;i=i+1) {
	    for(j=1;j<=i;j=j+1)
	    if(i%2) printf("h");
	    else printf("b");
	 printf("\n"); }
	return 0; }