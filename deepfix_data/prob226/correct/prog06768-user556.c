#include <stdio.h>
int main() {
	int d,n;
	scanf("%d%d",&n,&d);int b[d],a[n],i,j;
	for(i=0;i<d;i++)
	scanf("%d",&b[i]);
	for(i=0;i<d;i++)
	a[i]=b[i];
	for(i=d;i<n;i++) {
	       for(j=1;j<=d;j++)
	        a[i]+=a[i-j]; }
	printf("%d",a[n-1]);
	return 0; }