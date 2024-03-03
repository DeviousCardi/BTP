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
	int n,a,testcases=0,k,i;
	scanf("%d",&testcases);
	for(i=0; i<testcases; i++) {
	 scanf("%d",&k);
	 if(k>catalan(i))
	 printf("%d\n",catalan(i));
	 break; }
	return 0; }