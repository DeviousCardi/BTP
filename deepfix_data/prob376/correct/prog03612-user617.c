#include <stdio.h>
#include <stdlib.h>
double fac(int n) {
    if (n==0) return 1;
    else return n*fac(n-1); }
int main() {
	int i,n,t;
	double cat;
	scanf("%d\n",&t);
	for(i=0;i<t;i++)  {
	scanf("%d\n",&n);
	cat = fac(2*n)/(fac(n+1)*fac(n));
	printf("%.0lf\n",cat); }
	return 0; }