#include <stdio.h>
#include <stdlib.h>
int fac(int n) {
    if(n==0)
    return 1;
    return n*fac(n-1); }
int com(int n, int r) {
    int res=(fac(n))/(fac(n-r)*fac(r));
    return res; }
int main() {
	int n;
	scanf("%d",&n);
	printf("%d",com(n, 2));
	return 0; }