#include <stdio.h>
#include <stdlib.h>
int catalan(int n){
    if(n==0)
    return 1;
    else {
        int t=catalan(n-1);
        t=t*2*(2*n-1);
        t=t/(n+1);
        return t; } }
int main() {
	int t,i,k;
	scanf("%d",&t);
	for(i=0;i<t;i++){
	    scanf("%d",&k);
	    printf("%d",catalan(k));
	    printf("\n"); }
	return 0; }