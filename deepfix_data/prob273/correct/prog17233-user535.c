#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c,d,e,f;
	scanf("%d",&d);
	e=d/2+1;
	f=e;
	for (a=1;a<=f;a++) {
	    for(a=1;a<=e;a++) {
	     printf(" "); }
	    for (c=1;c<=b-1;c++) {
	        e=a;
	     printf("%d",e); }
	    printf("\n"); }
	return 0; }