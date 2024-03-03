#include <stdio.h>
#include <stdlib.h>
int cat=1;
int catalan(int n) {
    if(n==0||n==1)
        return 1;
      int i,k=n;
      cat=cat*((n+k)/k);
    for(i=0;i<n;i++) {
         catalan(n-1); }
        return cat; }
int main() {
	int i,t;
	int test;
	scanf("%d\n",&t);
	for(i=0;i<t;i++) {
	    scanf("%d\n",&test);
	    printf("%d\n",catalan(test)); }
	return 0; }