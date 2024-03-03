#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,n,x=0;
	scanf("%d",&n);
	int a[n];
	a[n]=0;
	for(i=0;i<n;i++) {
	    scanf("%d",&a[i]); }
	for(i=0;i<=n;i++) {
	   if(a[i+1]>a[i])
	   x++;
	   else
	   a[i+1]=a[i]; }
	return 0; }