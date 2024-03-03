#include <stdio.h>
#include <stdlib.h>
double binomial(double n,double k){
    if(n<k) return 0;
    if(n==0 && k==0) return 0;
    if(k==0||n==k) return 1;
    return binomial(n-1,k)+binomial(n-1,k-1); }
double catalan(double n){
    if(n==0) return 1;
    return (binomial(2*n,n)/(float)(n+1); }
int main() {
	int t,i,A[100],j;
	scanf("%d\n",&t);
	for(i=0; i<t; i++)
	scanf("%d\n",&A[i]);
	printf("%d",catalan(5));
	return 0; }