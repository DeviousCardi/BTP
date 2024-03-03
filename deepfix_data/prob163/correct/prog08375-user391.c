#include <stdio.h>
#include <stdlib.h>
int main() {
	char a[502];
	char b[502];
	int c;
	int n,i,k;
	c=getchar();
  	for(k=0;k<502&&c!=EOF;) {
	    a[k]=c;
	    c=getchar();
	    k=k+1; }
	for(i=k-1;i>=0;i--) {
	    b[k-1]=a[k]; }
	printf("%c %c %c",b[0],b[1],b[2]);
	return 0; }