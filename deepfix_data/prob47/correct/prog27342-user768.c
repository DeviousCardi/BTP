#include <stdio.h>
#include <stdlib.h>
int catalan(int n) {
    if(n==0)
    { return 1; }
    return ((catalan(n-1)*2*(2*n-1))/(n+1)); }
int main() {
	int i,j,k,l;
	int sum=0;
	scanf("%d",&i);
	for(j=0;j<i;j++) {
	    scanf("%d",&k);
	    for(l=0;l<k;l++) {
	        sum=sum+catalan(l); }
	printf("%d\n",sum); }
	return 0; }