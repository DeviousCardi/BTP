#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,b,c,d;
	scanf("%d",&n);
	for(b=0;b<n/2;b++) { {
	        for(d=0;d<(n/2-b);d++)
	        printf("%c",' '); } {
	        for(c=0;c<(2*b+1);c++)
	        printf("%c",'*'); }
	    printf("\n"); }
	b=0;
	d=0;
	c=0;
	for(b=0;b<n/2;b++) { {
	        for(d=0;d<b;d++)
	        printf("%c",' '); } {
	        for(c=0;c<(n-2*b-1);c++)
	        printf("%c",'*'); }
	    printf("\n"); }
	return 0; }