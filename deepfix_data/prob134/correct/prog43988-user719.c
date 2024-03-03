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
	int i,j;
	for(i=0;i<=20;i++){
	    for(j=0;j<=20;j++){
	        if(binomial(i,j)==b){
	            printf("%d %d",i,j);
	            break; }
	        else if(i==20&&j==20)
	            printf("-1"); } }
	return 0; }