#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,n,a[n];
	scanf("%d",&n);
	   for (i=0;i<n;i++) {
	       scanf("%d",&a[i]); }
	   if (i==0)  printf("%d",a[0]);
	   if (a[i]>a[i-1] && a[i]<a[i+1]) {
	       printf("%d",i); }
	   else {
	       printf (" "); }
	return 0; }