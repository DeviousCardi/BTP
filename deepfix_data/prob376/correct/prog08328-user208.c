#include <stdio.h>
#include <stdlib.h>
int test;
int catalan(int n) {
        int i,sum=0;
    if(n==0)
        return 1;
    for(i=0;i<n;i++) {
    sum=sum+catalan(i)*catalan(n-1-i); }
    return sum; }
int main() {
	int i,t;
	scanf("%d\n",&t);
	for(i=0;i<t;i++) {
	    scanf("%d\n",&test);
	    printf("%d\n",catalan(test)); }
	return 0; }