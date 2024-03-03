#include <stdio.h>
#include <stdlib.h>
int catalan(int n) {
    if(n==0)
    return 1;
    else
    return 2*(catalan(n-1))*(2*n-1)/n+1; }
int main() {
	int t,k[50],i,j;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	scanf("%d",&k[i]);
	for(i=0;i<t;i++)
	{   j=0;
	    while(1) {
	         if(catalan(j)>k[i])
	          break;
	          j++; }
	     printf("%d\n",catalan(j-1)); }
	return 0; }