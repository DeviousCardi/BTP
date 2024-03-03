#include <stdio.h>
#include <stdlib.h>
long binomial(int n,int k){
    if(n<k)
        return 0;
    if(n==0&&k==0)
        return 1;
    if(k==0)
        return 1;
    return binomial(n-1,k)+binomial(n-1,k-1); }
int main() {
	long b;
	scanf("%ld",&b);
	int i,j,m=0,n;
	for(i=0;i<=20;i++){
	    m=m+1;
	    n=0;
	    for(j=0;j<=20;j++){
	        if(binomial(i,j)==b){
	            printf("%d %d ",i,j);
	            break; }
	    n=n+1; }
	    if(n==21&&m==21)
	        printf("-1"); }
	return 0; }