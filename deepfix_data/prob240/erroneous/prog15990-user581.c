#include <stdio.h>
#include <stdlib.h>
int catalan(int n) {
    if(n==1)
    return 1;
    else
    return 2.0*(2*n-1)catalan(n-1)/(n+1); }
int main() {
	int t,count=0,n,i,j;
	scanf("%d",&t);
	while(count<t) {
	    scanf("%d",&n);
	    for(i=0;cat(i)<=n;i++) {
	        j=cat(i); }
	    printf("%d\n",j); }
	return 0; }