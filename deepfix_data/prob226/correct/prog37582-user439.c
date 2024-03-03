#include <stdio.h>
int main() {
	int d,n,i=0;
	int b[25],a[40];
	scanf("%d%d",&d,&n);
	for(i=0;i<d;i++) {
	    scanf("%d",&b[i]); }
	for(i=0;i<d;i++) {
	    a[i]=b[i]; }
	int s=0;
	for(i=0;i<d;i++) {
	    s=s+a[i]; }
	if(n>d) {
	a[d]=s;
	for(i=d+1;i<=n+1;i++) {
	    a[i]=s+a[i-1]; } }
	printf("%d",a[n]);
	return 0; }