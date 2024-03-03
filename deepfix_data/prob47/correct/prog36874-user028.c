#include <stdio.h>
#include <stdlib.h>
int catalan(int n) {
    if(n==0)
    return 1;
    else
    return ((2*(2*n-1))*catalan(n-1)/(n+1)); }
int k_cat_sum(int k){
    int i,sum=0;
    for(i=0;i<k;i++){
        sum=sum+catalan(i); }
    return sum; }
int main() {
	int t;
	scanf("%d\n",&t);
	int A[t][1],i;
	for(i=0;i<t;i++) {
	    scanf("%d\n",&A[i][1]); }
	int j;
	for(j=0;j<t;j++){
	    printf("%d\n",k_cat_sum(A[j][1])); }
	return 0; }