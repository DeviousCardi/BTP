#include <stdio.h>
#include <stdlib.h>
int catalan(int (n+1)) {
  if(n+1==0) return 1;
  else return 2*(2*n+1)/n+2*catalan(n) }
int main() {
	int t;
	int k[100];
	scanf("%d\n",&t);
	for(i=0;i<t;i++) {
	    scanf("%d\n"&k[i]); }
		for(i=0;i<t;i++) {
	    printf("%d\n"catalan(k[i])); }
	return 0; }