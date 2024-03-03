#include <stdio.h>
#include <stdlib.h>
int main() {
	long t,i,a[20],j;
	scanf("%d",&t);
	for(i=0;i<t;i++) {
	    scanf("\n%d",&a[i]); }
	for(j=0;j<t;j++) {
	    printf("%d\n",catalan(a[j])); }
	printf("%d",catalan(5));
	return 0; }
int factorial(int k){
    if(k==1 || k==0) {
        return 1; }
    return (k*factorial(k-1)); }
int comb(int n,int r){
    return(factorial(n)/(factorial(n-r)*factorial(r))); }
int catalan(int e){
    return (comb(2*e,e)-comb(2*e,e+1)); }