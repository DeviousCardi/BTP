#include <stdio.h>
#include <stdlib.h>
int l=2;
int catalan(int k) {
   if(l<=k)
   return((l+k)*catalan(l+1));
   else
   return 1; }
int main() {
	int i,t,k;
	scanf("%d",&t);
	for(i=0;i<t;i++) {
	scanf("%d",&k);
	printf("%d\n",catalan(k)); }
	return 0; }