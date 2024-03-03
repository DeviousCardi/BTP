#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,count,n;
	char a[100],b[100];
	count=0;
	n=100;
	for(i=0;i<n;i++) {
	    if(a[i]=='\n') {
	        break; }
	    scanf("%d",&a[i]);
	    count ++; }
	printf("%d",&count);
	return 0; }