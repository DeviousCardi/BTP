#include <stdio.h>
#include <stdlib.h>
int catalan(int n) {
	    int p;
	    p=((4*n)-6)*catalan(n-1)/n;
	    return p; }
int main() {
    int t,arr[20],i;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	scanf("%d\n",&arr[i]);
	for(i=0;i<t;i++)
	printf("%d\n",catalan(arr[i]));
	return 0; }