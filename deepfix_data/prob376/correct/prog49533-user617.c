#include <stdio.h>
#include <stdlib.h>
int fac(int n) {
    if (n==0) return 1;
    else return n*fac(n-1); }
int main() {
	int i,n,t;
	int cat;
	scanf("%d",&t);
	for(i=1;i<=t;i++)
	scanf("%d",&n);
	cat = fac(2*n)/(fac(n+1)*fac(n));
	printf("%d",cat);
	return 0; }