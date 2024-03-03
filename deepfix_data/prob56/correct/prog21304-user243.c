#include <stdio.h>
#include <stdlib.h>
int catalan(int n) {
    if(n==0)
    return 1;
    if(n>0)
    return (catalan(n-1))*((4*n+2)/(n+2)); }
int main() {
	int i,j=0,t,k;
	scanf("%d",&t);
	for(i=0;i<t;i++) {
	    scanf("%d",&k);
	   while(j>=0) {
	       if(catalan(j)==k) {
	       printf("%d",catalan(j+1));
	       break; }
	   j++; } }
	return 0; }