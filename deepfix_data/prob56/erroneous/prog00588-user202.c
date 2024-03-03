#include <stdio.h>
#include <stdlib.h>
long int fact(int n){
    if(k==0)   return 1;
    return n*fact(n-1); }
int cat(int n){
    long int ans;
    ans=fact(2*n);
    ans=ans/fact(n);
    ans=ans/fact(n+1);
    return ans }
int main() {
	int t,k[100];
	scanf("%d\n",&t);
	int i;
	for(i=0;i<t;i++){
	    scanf("%d\n",&k[i]); }
	int j;
	for(j=0;j<t;j++){
	    i=0;
	    while(cat(i)<=k[j]){
	        i++; }
	    printf("%d\n",cat(i)); }
	return 0; }