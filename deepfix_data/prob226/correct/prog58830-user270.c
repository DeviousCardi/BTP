#include <stdio.h>
int main() {
	int d, n;
	scanf("%d%d",&d,&n);
	int b[d],i, a[30];
	for(i=0;i<d;i++) {
	    scanf("%d",&b[i]);
	    printf("%d ",b[i]); }
	printf("\n");
	for (i=0; i<d;i++) {
	    a[i]=b[i];
	    printf("%d ",a[i]); }
	printf("\n");
	if (n-d<0) a[n]=b[0];
	else {
	       for(i=n-2;i>=(n-d);i=i-1)
	       a[n]=a[n-1]+a[i];
	       printf("%d ",a[n]); }
	printf("%d",a[n]);
	return 0; }