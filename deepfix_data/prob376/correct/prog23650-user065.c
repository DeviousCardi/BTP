#include <stdio.h>
#include <stdlib.h>
long int catalan (int n) {
    if (n==0) {
        return 1; }
    else {
        return ((float)((2*(2*n-1))/(n+1))*catalan(n-1)); } }
int main() {
	int t, k ,i;
    scanf("%d\n",&t);
    for(i=0;i<t;i++) {
        scanf("%d\n",&k);
        printf("%ld\n", catalan (k)); }
	return 0; }