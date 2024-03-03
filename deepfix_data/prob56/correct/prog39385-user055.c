#include <stdio.h>
#include <stdlib.h>
int catalan(int n) {
   if (n==0)
   return 1;
   else
   return ((2*(2*n-1))*catalan(n-1))/(n+1); }
int main() {
	int i,t,k;
	scanf("%d",&t);
	for (i=1;i<=t;i++) {
	    scanf("%d",&k);
	    int j=0;
	     while (1) {
	      if (catalan(j)>k)break;
          j++; }
	    printf ("%d\n", catalan(j)); }
	return 0; }