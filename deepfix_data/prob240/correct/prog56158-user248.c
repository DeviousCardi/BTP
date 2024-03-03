#include <stdio.h>
#include <stdlib.h>
int main() {
    int t,i,a[20],j,l;
	scanf("%d",&t);
	for(i=0;i<t;i++) {
	    scanf("\n%d",&a[i]); }
	for(j=0;j<t;j++) {
	    l=0;
	    while(catalan(l)<a[j]) {
	   	   l++; }
	    printf("%d\n",catalan(l-1)); }
	return 0; }
int factorial(int k){
    if(k==1 || k==0) {
        return 1; }
    return (k*factorial(k-1)); }
long comb(int n,int r){
    return(factorial(n)/(factorial(n-r)*factorial(r))); }
int catalan(int e){
    if(e==0) {
        return 1; }
    return (catalan(e-1)*(4.0-(6.0/(e+1)))); }