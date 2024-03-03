#include <stdio.h>
#include <stdlib.h>
long long int B(int n,int k) {
    if(n<0)
        return -1;
    if(n<k)
        return 0;
    if(n==0 && k==0)
        return 1;
    if(k==0)
        return 1;
    return B(n-1,k)+B(n-1,k-1); }
int main() {
	int n,k,count=0;
	long long int b;
	scanf("%lld",&b);
	if(b<0)
	    printf("-1");
	else {
	    for(n=0;n<=20;n++) {
	        for(k=0;k<=n;k++) {
	            if(B(n,k)==b) {
	                printf("%d %d",n,k);
	                count=1;
	                break; } }
	        if(count==1)
	            break; }
	    if(!count)
	        printf("-1"); }
	return 0; }