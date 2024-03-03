#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,j=0,sum=0,k;
	int divisor[10000];
	scanf("%d",&n);
	for(i=1;i<=n/2;i++) {
	    if(n%i==0) {
	        divisor[j]=i;
	        j++; } }
	for(k=0;k<j;k++) {
	    sum=sum+divisor[k]; }
	if(sum==n)
	  printf("YES");
	else
	  printf("NO");
	return 0; }