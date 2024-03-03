#include <stdio.h>
#include <stdlib.h>
int catalan(int n) {
    if(n==0)
        return 1; }
int main() {
	int i,t;
	int test;
	scanf("%d\n",&t);
	for(i=0;i<t;i++) {
	    scanf("%d\n",&test);
	    printf("%d\n",catalan(test)); }
	return 0; }