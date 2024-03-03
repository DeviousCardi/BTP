#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
	char a[15],b[15];
	int k,c,i;
	double inv=0;
	c=getchar();
	for(k=0;k<15&&c!=EOF;) {
	    a[k]=c;
	    c=getchar();
	    k++; }
	for(i=k;i>=0;i--) {
	  b[k-i]=a[i]; }
	printf("%c %c %c",b[0],b[1],b[2]);
	return 0; }