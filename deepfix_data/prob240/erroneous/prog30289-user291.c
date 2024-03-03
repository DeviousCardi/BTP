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
    if((k>=c1)
    return c1;
    else
    return catalan(n+1,k); }
int main() {
	int t,i;
	scanf("%d\n",&t);
	int ar[999999];
	for(i=0;i<t;i++) {
	    scanf("%d\n",&ar[i]); }
	for(i=0;i<t;i++) {
	    printf("%d\n",catalan(0,ar[i])); }
	return 0; }