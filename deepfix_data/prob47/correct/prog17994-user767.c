#include <stdio.h>
#include <stdlib.h>
int catalan(int n) {
    if(n==0) {
        return 0; }
    if(n==1) {
        return 1; }
    else
    return ((4*n-2)/(n+1)*catalan(n-1)); }
int main() {
	int n,t,i;
	scanf("%d\n",&t);
	for(i=0;i<t;i++) {
	    scanf("%d\n",&n);
	    printf("%d\n",catalan(n)); }
	return 0; }