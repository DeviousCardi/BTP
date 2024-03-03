#include <stdio.h>
#include <stdlib.h>
int catalan(int n){
    if(n==0) return 1;
    else return ((2*(2*n+1))*catalan(n-1))/(n+2); }
int main() {
	int t,i,k,j=0;
	scanf("%d",&t);
	for(i=0;i<t;i++){
	    scanf("%d",&k);
        while(k>catalan(j)) {
            j++; }
	    printf("%d",catalan(j-1)); }
	return 0; }