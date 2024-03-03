#include <stdio.h>
#include <stdlib.h>
int catalan(int n) {
   if (n==0)
   return 1;
   else
   return ((2*(2*(n-1))*catalan(n-1))/n+1); }
int main() {
	int i,t,k;
	scanf("%d",&t);
	for (i=1;i<=t;i++) {
	    scanf("%d",&k);
	    int i=0;
	    if(k<1)
	    printf("1\n"); {
	      if (catalan(i)>k)break;
          i++; }
	    printf ("%d\n", catalan(i)); }
	return 0; }