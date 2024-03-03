#include <stdio.h>
#include <stdlib.h>
int fac(int n) {
    int i,fact=1;
    if(n!=0) {
        for(i=1;i<=n;i++) {
        fact=fact*i; }
    return fact; }
    else
    return 1; }
int catalan(int n,int k) {
    int c1,c2;
    c1=fac(2*n)/(fac(n)*fac(n+1));
    c2=fac(2*(n+1))/(fac(n+1)*fac(n+2));
   return c1; }
int main() {
	int t,i;
	scanf("%d\n",&t);
	int ar[999999];
	for(i=0;i<t;i++) {
	    scanf("%d\n",&ar[i]); }
	printf("%d",catalan(3,5));
	return 0; }