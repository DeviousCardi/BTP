#include <stdio.h>
#include <stdlib.h>
int catalan (int n) {
    if(n==0)
    return 1;
    return ((4*n+2)*catalan(n-1))/(n+2); }
int main() {
    int t,n,i,j,sum=0;
    scanf("%d",&t);
	for(i=1;i<=t;i++) {
	   sum=0;
	   scanf("%d\n",&n);
	   for(j=1;j<n-1;j++) {
	       sum=sum+catalan(j); }
	   printf("%d\n",sum); }
	return 0; }