#include <stdio.h>
#include <stdlib.h>
 int fibbo(int n) {
        if(n==0)
        return 1;
        else
      return fibbo(n-1)+fibbo(n-2) ; }
int main() {
	int i,t;
	scanf("%d\n",&t);
	int ar[10000];
	for(i=0;i<t;i++) {
	    scanf("%d\n",&ar[i]); }
	for(i=0;i<t;i++) {
	    printf("%d\n",fibbo); }
	return 0; }