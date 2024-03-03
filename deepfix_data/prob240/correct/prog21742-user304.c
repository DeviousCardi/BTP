#include <stdio.h>
#include <stdlib.h>
int catalan(int n) {
    int k;
    if(n<=1)
    return 1;
    int val = 0;
    for (k=0;k<n;k++) {
          val = val + (catalan(k)*catalan(n-k)); }
    return val; }
int main() {
	int t,i,j;
	scanf("%d\n",&t);
	int a[t];
	for(i=0;i<t;i++)
	scanf("%d\n",&a[i]);
	for(i=0;i<t;i++) {
	   for(j=0;(catalan(j))<(a[i]);j++) ;
	   printf("%d\n",catalan(j-1)); }
	return 0; }