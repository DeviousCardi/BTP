#include <stdio.h>
#include <stdlib.h>
int cat(int n) {
    if(n==0)
        return 1;
    if(n==1)
        return 1;
    else
        return cat(n-1)*(2*n-1)*(2*n)/n/(n+1); }
int main() {
	int t,k,i,j,temp=1;
	scanf("%d\n",&t);
	for(i=0;i<t;i++) {
	    scanf("%d\n",&k);
	    for(j=0;temp<=k;j++)
	        temp=cat(j);
	    printf("%d\n",temp); }
	return 0; }