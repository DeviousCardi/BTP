#include <stdio.h>
int main() {
	int d,n,i;
	scanf("%d %d", &d, &n);
	int b[50],a[50];
	for(i=0;i<n;i++) {
		scanf("%d",&b[i]); }
	for(i=0;i<d;i++) {
	    a[i]=b[i]; }
	for(i=d;i<n;i++) {
	    if(i==d) {
	        a[i]=b[i]; }
	    else {
	     a[i]=a[i-1]+b[i-1]; } }
	printf("%d",a[i]);
	return 0; }