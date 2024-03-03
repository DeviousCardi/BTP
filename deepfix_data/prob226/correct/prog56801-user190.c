#include <stdio.h>
int main() {
	int d,n;
	scanf("%d %d",&d,&n);
	int b[d],i,a[n];
	for(i=0;i<d;i++){
	    scanf("%d",&b[i]);
	    a[i]=b[i]; }
	a[n]=0;
	for(i=1;i<=d;i++){
	    a[n]=a[n]+a[n-i]; }
	printf("%d",a[n]);
	return 0; }