#include <stdio.h>
#include <stdlib.h>
int catalan(int n) {
    if(n==0)
    return 1;
    if(n>0)
    return (catalan(n-1))*((4*n+2)/(n+2)); }
int main() {
	int i,j=1,t,k;
	scanf("%d\n",&t);
	for(i=1;i<=t;i++) {
	    scanf("%d\n",&k);
	   while(j>=0) {
	       if(catalan(j)==k) {
	       printf("%d",catalan(j+1));
	       break; }
	   j++; } }
	return 0; }