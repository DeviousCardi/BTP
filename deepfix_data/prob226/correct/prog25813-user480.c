#include <stdio.h>
int main() {
	int d,n,i;
	scanf("%d %d", &d, &n);
	int b[1000],a[1000];
	for(i=0;i<d;i++) {
		scanf("%d",&b[i]); }
	for(i=0;i<d;i++) {
	    a[i]=b[i]; }
	for(i=d-1;i<n;i++) {
	    a[i+1]=((2*a[i])-(a[i-d])); }
	printf("%d",a[n]);
	return 0; }