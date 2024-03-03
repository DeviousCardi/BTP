#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,n,j;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++) {
	    scanf("%d",&a[i]);
	    a[i]<=a[i+1];
	    for(j=1;j<=n-1;j++) {
	        a[i]==a[i+j];
	        printf("%d",a[i]); } }
	return 0; }