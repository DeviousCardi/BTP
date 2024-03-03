#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
	int a,b,c,d,n;
	scanf("%d",&n);
	for(a=1;a<=n;a++) {
	    for(b=1;b<=(n+1)/2;b++)
	    {if(b>abs(((n+1)/2)-1))
	    printf(" ");
	    else printf("*"); }
	    printf("\n"); }
	return 0; }