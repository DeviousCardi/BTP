#include <stdio.h>
#include <stdlib.h>
int catalan(int n) {
    int i;
    if(n<=1)
    return 1;
    int val = 0;
    for (i=0;i<n;i++) {
          val = val + (catalan(i)*catalan(n-i)); }
    return val; }
int main() {
	int t,i,j;
	scanf("%d\n",&t);
	int a[t];
	for(i=0;i<t;i++)
	scanf("%d\n",&a[i]);
	for(i=0;i<t;i++) {
	   for(j=0;(catalan(j))<=(a[i]);j++) ;
	   printf("%d\n",catalan(j-1)); }
	return 0; }