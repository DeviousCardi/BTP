#include <stdio.h>
#include <stdlib.h>
int Cat(int n) {
    if(n==1)
        return 1;
    else
        return Cat(n-1)*2*((2*n)+1)/(n+2); }
int main() {
	int t,n,i,r;
	scanf("%d",&t);
	for(i=0;i<t;i++) {
	    scanf("%d",&n);
	    r=Cat(n);
	    printf("%d",r);+ }
	    return 0; }