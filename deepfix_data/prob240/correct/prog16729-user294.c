#include <stdio.h>
#include <stdlib.h>
  int catalan(int n);
  int ans=0;
  int catalan(int n)
  { int catn;
       if(n==0)
       return 1;
       else
    {  (catn=catalan(n-1));
       ans=(4*n-2)*catn/(n+1);
       return ans; } }
int main() {
	int n,testcases=0,k,i;
	scanf("%d",&testcases);
	for(i=0; i<testcases; i++) {
	 scanf("%d",&k);
	 i=catalan(k-1);
	 printf("%d\n",i); }
	return 0; }