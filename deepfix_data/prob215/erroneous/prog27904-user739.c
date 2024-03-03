#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,j;
	int s=1
	scanf("%d",&n);
	for(i=2;i<n;i++) {
	    if(n%i==0) {
	        s=s+i; } }
	 if(n==s)
	    printf("yes");
	    else
	    printf("no");
	return 0; }