#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,n,t,a[20],s[20];
	scanf("%d",&n);
	   for (i=0;i<n;i++) {
	       scanf("%d",&a[i]); }
	    for (i=0;i<t;i++) {
	       scanf("%d",&s[i]); }
	     if ((a[i]<a[i-1]) && (a[i]<a[i+1])) {
	       printf("%d\n",i); } }
	return 0; }
	return 0; }