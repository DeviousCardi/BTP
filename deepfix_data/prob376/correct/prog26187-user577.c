#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int catalan(int n) {
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