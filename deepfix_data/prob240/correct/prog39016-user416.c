#include <stdio.h>
#include <stdlib.h>
int cat(int n){
    if(n==0)
    return 1;
    else
    return 2*(2*n+1)/(n+2)*cat(n-1);
    return 0; }
int check(int n,int k) {
    if(cat(n)>k)
    return k;
    if(cat(n)==k)
    return cat(n-1);
    if(cat(n)<k)
    return check(n+1,k);
    return 0; }
int main() {
	int i,t,k,n=0;
	scanf("%d",&t);
	for(i=1;i<=t;i++) {
	    scanf("%d",&k);
	    printf("%d",check(n-1,k));
	    printf("\n"); }
	return 0; }