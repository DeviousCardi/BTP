#include <stdio.h>
#include <stdlib.h>
int catalan(int n);
int main() {
   int t,i,k;
   scanf("%d",&t);
   for(i=0;i<t;i++) {
       scanf("%d",&k);
       printf("%d\n",catalan(k)); }
	return 0; }
int catalan(int n) {
    if(n==1)
    return 1;
    else
    return 2*(2*n-1)/(n+1)*catalan(n-1); }