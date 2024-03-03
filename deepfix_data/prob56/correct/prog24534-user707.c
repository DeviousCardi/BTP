#include <stdio.h>
#include <stdlib.h>
int catalan(int n) {
    if(n==0)
    return 1;
    return catalan(n-1)*(4*n+2)/(n+2); }
int first_term(int k) {
    int i=0;
    for(i=0;i<10000;i++) {
      if(k<catalan(i))
      break; }
    return catalan(i); }
int main() {
	int t=0,k=0,i=0;
	scanf("%d\n",&t);
	for(i=0;i<t;i++) {
	    scanf("%d\n",&k);
	    printf("%d\n",first_term(k)); }
	return 0; }