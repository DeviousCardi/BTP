#include <stdio.h>
#include <stdlib.h>
int cat_chk(long n,int x,int p) {
    printf("%d ", p);
    if(n==p)
      return 1;
    else if(p>n)
      return 0;
    else
      return cat_chk(n,x+1,(p*2*(2*x + 1))/(x+2)); }
int main() {
	int i,t;
	scanf("%d", &t);
	long k[t];
	for(i=0;i<t;i++) {
	    scanf("%ld", &k[i]); }
	for(i=0;i<t;i++) {
	    if(cat_chk(k[i],1,1)) {
	        printf("yes\n"); }
	    else
	        printf("no\n"); }
	return 0; }