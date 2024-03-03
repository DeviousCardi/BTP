#include <stdio.h>
#include <stdlib.h>
int main() {
    int n;
    scanf("%d",&n);
    int a[n],k,m=0,i;
	for(i=0;i<n;i++) {
	    scanf("%d",&a[i]);
	    printf("%d",a[i]); }
	for(i=0;i<n;i++) {
	    for(k=1;k<n;k++) {
	        if(a[k]-a[i]<0) {
	           m=m+1;
	           printf("%d %d",a[k],a[i]); } } }
	printf("%d",m);
	return 0; }