#include <stdio.h>
#include <stdlib.h>
int main() {
	int  n,i,j,x=0;
	float a,b,s=0;
	scanf ("%f",&a);
	scanf ("%f",&b);
	scanf ("%d",&n);
	int f[n];
	for (j=0;j<=n;j++) {
	    scanf ("%d",&f[n]); }
	while (x<=-1) {
	    f[x]=1; }
	while (x>-1 && x<1) {
	    f[x]=x*x; }
	while (x>=1) {
	    f[x]=x*x*x; }
	for ( i=0; i<=n-1;i++) {
	    s = s + (f[i]*((b-a)/2)); }
	printf ("%.4f",s);
	return 0; }