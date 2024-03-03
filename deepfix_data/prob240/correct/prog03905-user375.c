#include <stdio.h>
#include <stdlib.h>
int catalan(int n){
    if(n==1)
    return 1;
    else if(n==2)
    return 1;
    else
    return catalan(n-1)*2*(2*n-1)/(n+1); }
int main() {
	int t,i,k;
	scanf("%d",&t);
	for(i=0;i<t;i++){
	    scanf("%d",&k);
	    printf("%d",catalan(k));
	    printf("\n"); }
	return 0; }