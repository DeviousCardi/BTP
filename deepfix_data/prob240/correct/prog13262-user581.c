#include <stdio.h>
#include <stdlib.h>
int catalan(int n) {
    if(n==1)
    return 1;
    else
    return 2.0*(2*n-1)*catalan(n-1)/(n+1); }
int main() {
	int t,count=0,n,i;
	scanf("%d",&t);
	while(count<t) {
	    int j=0;
	    scanf("%d",&n);
	    for(i=0;catalan(i)<=n;i++) {
	        j=catalan(i); }
	    printf("%d\n",j);
	    count++; }
	return 0; }