#include <stdio.h>
#include <stdlib.h>
int sum=0;
int cat(int n) {
    if(n==0)
    return 1;
    return 2*(2*n-1)*cat(n-1)/(n+1); }
int main() {
	int i,n,j,k;
	scanf("%d",&n);
	for(i=0;i<n;i++) {
	    scanf("%d",&k);
	    for(j=0;j<k;j++) {
	        sum+=cat(j); }
	    printf("%d\n",sum);
	    sum=0; }
	return 0; }