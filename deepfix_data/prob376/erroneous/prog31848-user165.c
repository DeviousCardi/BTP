#include <stdio.h>
#include <stdlib.h>
int fac(int n) {
    if (n==0) return 1;
    else return n*fac(n-1); }
int main() {
	          int i,n,t,cat;
	          scanf("%d",&n);
	          if(i=0; i<n; i++) {
	              scanf("%d",&t);
	              cat= (fac(2t))/(fac(n+1)*fac(n));
	              printf("%d",cat); }
	return 0; }