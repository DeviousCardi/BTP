#include <stdio.h>
#include <stdlib.h>
int Cat(int n) {
    if(n==1)
        return 1;
    else
        return Cat(n-1)*2*((2*n)-1)/(n+1); }
int main() {
	int t,n,k,i,r;
	scanf("%d",&t);
	for(i=0;i<t;i++) {
	    scanf("%d",&n);
	    for(k=1;k<n;k++) {
	        r=Cat(k);
	        if(r>=n)
	            break; } }
	    return 0; }