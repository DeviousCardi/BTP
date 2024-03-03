#include <stdio.h>
#include <stdlib.h>
long int Han(int n) {
    if(n==0)
        return 0;
    return 2*Han(n-1)+1; }
int main() {
	long int i,n,t,res,j;
	scanf("%ld",&t);
	for(i=0;i<t;i++) {
	    res=0;
	    scanf("%ld",&n);
	    for(j=0;j<=n;j++) {
	        if(n==Han(n-j)) {
	            res=1;
	            break; } }
	    if(res==1)
	        printf("yes\n");
	    else
	        printf("no\n"); }
	return 0; }