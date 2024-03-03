#include <stdio.h>
#include <stdlib.h>
int catalan(int n) {
    if(n==0) {
        return 0; }
    if(n==1) {
        return 1; }
    return 4*catalan(n-1)-(6.0*catalan(n-1)/(n+1)); }
int main() {
	int n,t,i;
	scanf("%d\n",&t);
	for(i=0;i<t;i++) {
	    scanf("%d\n",&n);
	    printf("%d\n",catalan(n)); }
	return 0; }