#include <stdio.h>
#include <stdlib.h>
double fac(double n) {
    if (n==0) return 1;
    else return n*fac(n-1); }
int main() {
	          int i,n,t;
	          double cat;
	          scanf("%d\n",&n);
	          for (i=0; i<n; i++) {
	              scanf("%d\n",&t);
	              cat= (fac(2*t))/(fac(t+1)*fac(t));
	              printf("%lf\n",cat); }
	return 0; }