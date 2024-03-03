#include <stdio.h>
int main() {
	int d,n,a[30],;
	scanf("%d",&d,&n);
	for(int i=0;i<d;i++)
	    scanf("%d",&a[i]);
	    a[d]=0;
	for(int i=0;i<d;i++)
	        a[d]=a[d]+a[i];
	for(int i=d+1;i<=n;i++) {
	        a[i]=2*a[i-1]-a[i-d-1]; }
	printf("%d",a[n]);
	return 0; }