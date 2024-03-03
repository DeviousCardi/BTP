#include <stdio.h>
#include <stdlib.h>
int catalan(int n) {
        int i;
    if(n==0)
        return 1;
        for(i=0;i<=n;i++){
    catalan(i)*catalan(n-1); }
        return catalan(n); }
int main() {
	int i,t;
	int test;
	scanf("%d\n",&t);
	for(i=0;i<t;i++) {
	    scanf("%d\n",&test);
	    printf("%d\n",catalan(test)); }
	return 0; }