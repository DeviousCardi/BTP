#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,j,k;
	scanf("%d\n",&n);
	int a[n];
	for(i=0;i<n;i++) {
	    scanf("%d",&a[i]); }
	int x;
	scanf("%d\n",&x);
	for(j=0;j<n;j++) {
	    for(k=n-1;k>j;k--) {
	       if(a[j]+a[k]==x)
	       printf("(%d,%d)\n",a[j],a[k]); } }
	return 0; }