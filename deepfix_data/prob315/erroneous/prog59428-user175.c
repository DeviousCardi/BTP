#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,a[1000],k[1000],m,sum=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n-1;i++) {
	    m=0;
	    for(j=i+1;j<n;j++) {
	    if(a[i]>a[j])
	    m++; }
	    k[i]=m; }
	for(i=0;i<n-1;i++)
	sum=sum+k[i];
	printf("%d\n",sum);
	for(i=0;i<n-1;i++)
	printf("%d ",k[i]);
	printf("%d",0);
	return 0; }