#include <stdio.h>
#include <stdlib.h>
int main() {
    int t,n,i,j;
    scanf("%d",&t);
	for(i=1;i<=t;i++) {
	   scanf("%d",&n);
	   while(catalan(j)<=n)
	   j++;
	   printf("%d\n",catalan(j)); }
	return 0; }
int catalan (int n) {
    if(n==0)
    return 1;
    else
    return ((4*n+2)*catalan(n-1))/n+2; }