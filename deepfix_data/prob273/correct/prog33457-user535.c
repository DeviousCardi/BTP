#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c,d,e,f;
	scanf("%d",&a);
	e=a/2+1;
	f=e;
	for (b=1;b<=f;b++) {
	    for(a=1;a<=e;a++) {
	     printf(" "); }
	    for (d=1;d<=a;d++) {
	        e=a;
	     printf("%d",e); }
	    printf("\n"); }
	return 0; }