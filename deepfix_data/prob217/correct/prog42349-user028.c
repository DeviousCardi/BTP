#include <stdio.h>
#include <stdlib.h>
int main() {
	long n;
	long A[n];
	long s;
	scanf("%ld",&n);
	int i;
	for(i=0;i<n;i++) {
	        scanf("%ld",&A[i]); }
	 scanf("%ld",&s);
	 int m,p;
	 for(m=0;m<n;m++) {
	        for(p=m+1;p<n;p++) {
	              if((A[m]+A[p])==s)
	             printf("(%ld,%ld)",A[m],A[p]); } }
	return 0; }