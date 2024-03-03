#include <stdio.h>
#include <stdlib.h>
int catalan(int n) {
    if(n==0)
    { return 1; }
    return ((catalan(n-1)*2*(2*n-1))/(n+1)); }
int main() {
	int i,j,k,l;
	scanf("%d",&i);
	for(j=0;j<i;j++) {
	    scanf("%d",&k);
	    if(k<=0)
	    printf("0");
	    else
	    for(l=0;l<k;l++) {
	        printf("%d\n" ,catalan(l)); } }
	return 0; }