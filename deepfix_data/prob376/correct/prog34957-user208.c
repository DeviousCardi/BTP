#include <stdio.h>
#include <stdlib.h>
int catalan(int n) {
        int i,cat;
    if(n==0)
        return 1;
        for(i=0;i<=n;i++){
    cat=catalan(i)*catalan(n-1); }
        return cat; }
int main() {
	int i,t;
	int test;
	scanf("%d\n",&t);
	for(i=0;i<t;i++) {
	    scanf("%d\n",&test);
	    printf("%d\n",catalan(test)); }
	return 0; }