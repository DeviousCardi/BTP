#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,space,n,last;
	scanf("%d",&n);
	last=n;
	for(i=1;i<=n-1/2;i++); {
	    for(space=1;space<=last;space++) {
	        printf(" "); }
	        last--;
	        printf("*"); }
	    for(space=1;space<=i-1;i++) {
	        printf("*"); }
	return 0; }