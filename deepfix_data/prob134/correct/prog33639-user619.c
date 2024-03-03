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
    return B(n,k-1)+B(n-1,k-1); }
int main() {
	int n,k,i,j,count=0;
	long long int b;
	scanf("%lld",&b);
	for(i=0;i<=20;i++) {
	    for(j=0;j<=20;j++) {
	        if(B(n,k)==b) {
	            printf("%d %d",n,k);
	            count=1;
	            break; } }
	    if(count==1)
	        break; }
	if(!count)
	    printf("No binomial indices exist.");
	return 0; }