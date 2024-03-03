#include <stdio.h>
#include <stdlib.h>
 int fibbo(int n) {
        if(n==1)
        return 0;
        else if(n==2||n==3)
        return 1;
        else
      return (fibbo(n-2)+fibbo(n-3)) ; }
int main() {
	int i,t;
	scanf("%d\n",&t);
	int ar[10000];
	for(i=0;i<t;i++) {
	    scanf("%d\n",&ar[i]); }
	for(i=0;i<t;i++) {
	    printf("%d\n",fibbo(ar[i])); }
	return 0; }