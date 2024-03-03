#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,j,n1,n2;
	scanf("%d",&n);
	for(i=2;i<n;i++) {
	    if(n%i==0)
	    n1=n/i;
	    for(j=2;j<n;j++) {
	        if(n1%j==0)
	        n2=n1/j; } }
	if(n==n1+n2+i);
	printf("Yes");
	return 0; }