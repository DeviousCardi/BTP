#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,m,a,b;
	scanf("%d",&n);
	for(m=0;m<n/2+1;m++) { {
	       for(a=0;a<m;a=a+1)
	       printf(" "); } {
	       for(b=0;b<n-2*m;b=b+1)
	       printf("*"); }
	    printf("\n"); }
	for(m=0;m<n/2;m++) { {
	       for(a=0;a<m;a=a+1)
	       printf(" "); } {
	       for(b=0;b<m;b=b+1)
	       printf("*");
	    }printf("\n"); }
	return 0; }