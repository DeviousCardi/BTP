#include <stdio.h>
#include <stdlib.h>
int main() {
	int i; int j; int n; int k;
	scanf("%d",&n);
	for (i=1;i<=n;i++) {
	    int a = (n+1)/2;
	    for (k=i;k<a;k++)  {
	        printf(" "); }
	    int p = a-i;
	    int val = (p>0) ? p : -p;
	    for (j=a;j>val;j--) {
	       int x = 1;
	   printf("%d",x); }
	   printf("\n"); }
	return 0; }