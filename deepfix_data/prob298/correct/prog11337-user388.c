#include <stdio.h>
#include <stdlib.h>
void is_catalan(int);
int main() {
	int t;
	scanf("%d",&t);
	int i,k;
	for(i=1;i<=t;i++) {
	    scanf("%d",&k);
	    is_catalan(k); }
	return 0; }
void is_catalan(int k) { }