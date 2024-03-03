#include <stdio.h>
int main() {
	int d,n,a[30];
	scanf("%d%d",&d,&n);
	for(int i=0;i<d;i++)
	    scanf("%d",&a[i]);
	    a[d]=0;
	for(int j=0;j<d;j++)
	        a[d]=a[d]+a[j];
	for(int k=d+1;k<=n;k++) {
	        a[k]=2*a[k-1]-a[k-d-1]; }
	printf("%d",a[0]);
	return 0; }