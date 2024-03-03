#include <stdio.h>
#include <stdlib.h>
int catalan(int n) {
	    if(n==1) return 1;
	    else
	    return  ((4*n)-6)*catalan(n-1)/n; }
int main() {
    int t,arr[20],i;
	scanf("%d",&t);
	for(i=1;i<=t;i++)
	scanf("%d",&arr[i]);
	for(i=1;i<=t;i++)
	printf("%d\n",catalan(arr[i]));
	return 0; }