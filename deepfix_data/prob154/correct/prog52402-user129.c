#include <stdio.h>
#include <stdlib.h>
int main() {
	int  n,i,j,x=0;
	float a,b,s;
	scanf ("%f",a);
	scanf ("%f",b);
	scanf ("%d",n);
	int f[x];
	for (j=0;j<=n;j++) {
	    scanf ("%d",f[x]); }
	while (x<=-1) {
	    f[x] ==1; }
	while (x>-1 && x<1) {
	    f[x]==x*x; }
	while (x>=1) {
	    f[x]==x*x*x; }
	for ( i=0; i<=n-1;i++) {
	    s = s + (f[i]*((b-a)/2));
	    s++; }
	printf ("%f",s);
	return 0; }