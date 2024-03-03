#include <stdio.h>
#include <stdlib.h>
int main() {
	int n;
	long A[n];
	int s;
	scanf("%d",&n);
	int i;
	for(i=0;i<n;i++) {
	        scanf("%ld",&A[i]); }
	 scanf("%d",&s);
	 int m,p;
	 for(m=0;m<n;m++) {
	        for(p=n-1;p>m;p--) {
	              if((A[m]+A[p])==s)
	             printf("(%ld,%ld)",A[m],A[p]); }
	          printf("\n"); }
	return 0; }