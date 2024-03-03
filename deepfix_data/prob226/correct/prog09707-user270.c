#include <stdio.h>
int main() {
	int d, n;
	scanf("%d%d",&d,&n);
	int b[d],i, a[30];
	for(i=0;i<d;i++) {
	    scanf("%d",&b[i]); }
	for (i=0; i<d;i++) {
	    a[i]=b[i]; }
	if (n-d<0) a[n]=b[0];
	else {
	       for(i=n-d;i<=(n-2);i++)
	       a[n-1]=a[i]+a[n-1]; }
	printf("%d",a[n]);
	return 0; }