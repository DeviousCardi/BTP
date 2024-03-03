#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c,d,e;
	scanf("%d",&a);
	for (b=1;b<=a;b++) {
	    for(c=1;c<=a-b;c++) {
	     printf(" "); }
	    for (d=1;d<=a;d++) {
	        e=d;
	     printf("%d",e); }
	    printf("\n"); }
	return 0; }