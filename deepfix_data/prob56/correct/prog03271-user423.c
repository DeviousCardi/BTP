#include <stdio.h>
#include <stdlib.h>
int catalan(int n){
    int resc=0,i;
    if(n==0)
	return 1;
	for (i=0;i<n;i++)
	    resc= resc + catalan(i)*catalan(n-i-1);
	return resc; }
int main() {
	int i,t,k,j;
	scanf("%d",&t);
	for(i=0;i<t;i++) {
	    scanf("%d\n",&k);
	    for(j=0;j<100;j++)
	        if(catalan(i)>k) {
	            printf("%d\n",catalan(i));
	            break; } }
	return 0; }