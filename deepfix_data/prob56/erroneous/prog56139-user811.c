#include <stdio.h>
#include <stdlib.h>
int catalan(int n){
    if(n==0){
        return 1; }
    else{
        return  ((4*n-2)/(n+1))*catalan(n-1); } }
int main() {
	int t,ki,n=0;
	scanf("%d",&t);
	for(i=0;i<t;i++){
	    scanf("%d",&k);
	    while(catalan(n)<=k){
	        n++; }
	    printf("%d\n",catalan(n));
	    n=0; }
	return 0; }