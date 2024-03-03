#include <stdio.h>
#include <stdlib.h>
int binomial(int n,int k){
    if(n<k) return 0;
    if(n==0 && k==0) return 1;
    if(k==0) return 1;
    return binomial(n-1,k)+binomial(n-1,k-1); }
int catalan(int n){
    if(n==0) return 1;
    return binomial(2*n,n+1); }
int main() {
	int t,i,A[100],j;
	scanf("%d",&t);
	for(i=0; i<t; i++)
	scanf("%d",&A[i]);
	for(i=0; i<t; i++){
	    for(j=1; j<18; j++){
	    if(catalan(j)==A[i])
	    printf("yes\n"); }
	    if(j==18)
	    printf("no\n"); }
	return 0; }