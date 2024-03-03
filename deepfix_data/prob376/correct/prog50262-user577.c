#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int fact(int n) {
    if(n==0 || n==1)
    return 1;
    else return n*fact(n-1); }
int choose(int n, int r) {
    if(r==0 || r==n)
    return 1;
    else return ( fact(n)/ ( fact(r)*fact(n-r) ) + fact(n) % ( fact(r)*fact(n-r) ) ); }
int catalan(int n) {
    if(n==0)
    return 1;
    else return (  ( choose(2*n,n)/ (n+1) ) + choose(2*n,n) % (n+1) ) ; }
int main() {
    int i,no_test;
    scanf("%d",&no_test);
    int test[30];
    for(i=0; i<2*no_test; i++) {
        if(i%2==0)
        scanf("%d",&test[i/2]); }
    for(i=0; i<no_test; i++) {
        printf("%d\n",catalan(test[i]) ); }
    printf("%d\n",catalan(15));
	return 0; }