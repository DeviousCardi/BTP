#include <stdio.h>
int main() {
	int d, n;
	scanf("%d%d",&d,&n);
	int b[d],i, a[n];
	for(i=0;i<d;i++) {
	    scanf("%d",&b[i]);
	    printf("%d ",a[i]); }
	printf("\n");
	if (n-d<0) a[n]=b[0];
	else {
	       for(i=n-1;i>=n-d;i--)
	       a[n]=a[n]+a[i];
	       printf("%d",a[n]); }
	printf("%d",a[n]);
	return 0; }