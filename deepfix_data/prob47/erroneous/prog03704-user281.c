#include <stdio.h>
#include <stdlib.h>
int main() {
    int t,n,i,j,sum=0;
    scanf("%d",&t);
	for(i=1;i<=t;i++) {
	   sum=0;
	   scanf("%d\n",&n);
	   for(j=0;j<n;j++) {
	       sum=sum+catalan(j); }
	   printf("%d\n",sum; }
	return 0; }
int catalan (int n) {
    if(n==0)
    return 1;
    return ((4*n+2)*catalan(n-1))/(n+2); }