#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,count,c,i,j;
	scanf("%d";&n);
	long int x[n];
	for(i=0;i<n;i++) {
	    scanf("%ld",&x[i]); }
	for(i=0;i<n;i++) {
	    count=1;
	    for(j=i+1;j<n;j++) {
	        if(x[j]!=x[i])
	        break;
	        count++; }
	    if(c<count)
	    c=count; }
	printf("%d",c);
	return 0; }