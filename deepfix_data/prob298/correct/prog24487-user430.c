#include <stdio.h>
#include <stdlib.h>
double binomial(int n,int k){
    if(n<k) return 0;
    if(n==0 && k==0) return 0;
    if(k==0||n==k) return 1;
    return binomial(n-1,k)+binomial(n-1,k-1); }
double catalan(int n){
    int k;
    if(n==0) return 1;
    k=binomial(2*n,n);
    return k/(double)(n+1); }
int main() {
	int t,i,A[100],B[18],j,p=0;
	scanf("%d\n",&t);
	for(i=0; i<10;i++)
	B[i]=catalan(i);
	for(i=0; i<t; i++){
	    scanf("%d\n",&A[i]);
	    for(j=0; j<18; j++){
	    if(B[j]==A[i]){
	    printf("yes\n");
	    p=1;}
	    if(i==t-1) return 0; }
	    if(p==0)   printf("no\n");
	    p=0; }
	return 0; }