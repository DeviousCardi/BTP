#include <stdio.h>
#include <stdlib.h>
double fac(double n) {
    if (n==0) return 1;
    else return n*fac(n-1); }
int main() {
	int i,n,t;
	double cat;
	scanf("%d\n",&t);
	for(i=0;i<t;i++)  {
	scanf("%d\n",&n);
	cat = fac(2*n)/(fac(n+1)*fac(n));
	printf("%d\n",cat); }
	return 0; }