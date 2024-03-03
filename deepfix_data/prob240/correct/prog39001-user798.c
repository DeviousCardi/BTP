#include <stdio.h>
#include <stdlib.h>
int catalan(int n) {
  if(n==0) return 1;
  else return (2*(2*n-1))/n+1*catalan(n-1); }
int search(int n) {
   return catalan (n-1); }
int main() {
	int t,i;
	int k[100];
	scanf("%d\n",&t);
	for(i=0;i<t;i++) {
	    scanf("%d\n",&k[i]); }
		for(i=0;i<t;i++) {
	    printf("%d\n",search(k[i])); }
	return 0; }