#include <stdio.h>
int main() {
	int a[1000],i,d,n;
	scanf("%d\n",&d);
	for(i=0;i<d;i++) {
	    scanf("%d",&b[i]);
	    a[i]=b[i]; }
	scanf("%d\n",&n);
	i=n;a[i]=0;
	for(k=1;k<=d;k++) {
	    a[i]=a[i]+a[i-k]; }
	printf("%d",a[i]);
	return 0; }