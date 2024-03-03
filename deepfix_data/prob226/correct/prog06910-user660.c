#include <stdio.h>
int main() {
	int d,n,a[30],i,j,k;
	scanf("%d%d",&d,&n);
	for(i=0;i<d;i++)
	    scanf("%d",&a[i]);
	    printf("%d\n",a[0]);
	    a[d]=0;
	for(j=0;j<d;j++)
	        a[d]=a[d]+a[j];
	for(k=d+1;k<=n;k++) {
	        a[i]=2*a[k-1]-a[k-d-1]; }
	printf("%d",a[0]);
	return 0; }