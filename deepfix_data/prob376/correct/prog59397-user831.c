#include <stdio.h>
#include <stdlib.h>
int binomial (int n,int k){
    if(n==0&&k==0)
    return 1;
    else if(k==0&&n>0)
    return 1;
    else if(n<k)
    return 0;
    else
    return binomial(n-1,k)+binomial(n-1,k-1); }
int main() {
	int i,n,A[15];
	scanf("%d",&n);
	for(i=0; i<n; i++){
	 scanf("%d",&A[i]);
	 int k=(1/(A[i]+1))*binomial(2*A[i],A[i]);
	 printf("%d",k); }
	return 0; }