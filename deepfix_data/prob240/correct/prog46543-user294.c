#include <stdio.h>
#include <stdlib.h>
  int catalan(int n);
  int ans=0;
  int catalan(int n)
  { int catn;
       if(n==0)
       return 1;
       else
(catn=catalan(n-1));
       ans=(4*n-2)*catn/(n+1);
       return ans; }
int main() {
	int testcases=0,k,i,j;
	scanf("%d",&testcases);
	for(i=0; i<testcases; i++) {
	 scanf("%d",&k);
   for(j=0; j<100; j++)
	 if(k>catalan(j))
	 printf("%d\n",catalan(i)); }
	return 0; }