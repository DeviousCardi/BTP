#include <stdio.h>
#include <stdlib.h>
int main() {
	int a[1000],k,m=0,n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++) {
	    scanf("%d",&a[i]); }
	for(i=0;i<n;i++) {
	    for(k=0;k<n;k++)
	    if(a[k]-a[i]>0) {
	        m=m+1; } }
	printf("%d",m);
	return 0; }