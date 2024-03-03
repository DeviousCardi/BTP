#include <stdio.h>
#include <stdlib.h>
int catalan(int n) {
    if(n==0)
        return 1;
    else
        return 2*(2*n-1)/(n+1)*catalan(n-1); }
int main() {
	int t,k,i,j,sum,arr[16];
	for(i=0;i<16;i++) {
	    arr[i]=catalan(i); }
	scanf("%d",&t);
	for(i=1;i<=t;i++) {
	    sum=0;
	    scanf("%d\n",&k);
	    for(j=1;j<=k;j++) {
	        sum+=arr[i-1]; }
	    printf("%d\n",sum); }
	return 0; }