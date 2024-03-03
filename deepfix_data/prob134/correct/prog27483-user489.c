#include <stdio.h>
#include <stdlib.h>
int B(int n, int k) {
    if(n<k)
    return 0;
    else if(n==0&&k==0)
    return 1;
    else if(k==0)
    return 1;
    else
    return B(n-1,k)+B(n-1,k-1); }
int main() {
	int b,v=0,n,k;
	scanf("%d",&b);
	for(n=0;n<=20;n++) {
	    for(k=0;k<=n;k++) {
	        if(B(n,k)==b) {
	            v=1;
	            break; } }
	    if(v==1)
	    break; }
	printf("%d %d",n,k);
	return 0; }