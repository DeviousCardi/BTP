#include <stdio.h>
#include <stdlib.h>
#include <math.h>
long fact(long n) {
    if(n==0 || n==1)
    return 1;
    else return n*fact(n-1); }
long choose(int n, int r) {
    if(r==0 || n==r)
    return 1;
    else
    return ( fact(n)/(fact(r)*fact(n-r))  ); }
long catalan(int n) {
    if(n==0)
    return 1;
    else return ( ( (4*n)-2 )/(n+1) )*catalan(n-1); }
int main() {
    int i,no_test;
    scanf("%d",&no_test);
    int test[30];
    for(i=0; i<2*no_test; i++) {
        if(i%2==0)
        scanf("%d",&test[i/2]); }
    for(i=0; i<no_test; i++) {
        printf("%ld\n",catalan(test[i]) ); }
	return 0; }