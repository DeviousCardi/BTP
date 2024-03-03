#include <stdio.h>
int main() {
	int d,n,b[100],a[100],i,sum=0;
	scanf("%d %d",&d,&n);
	for(i=0;i<d;i++)
	scanf("%d",&b[i]);
	for(i=0;i<d;i++)
	a[i]=b[i];
	for(i=1;i<d;i++) {
	    sum=sum+a[i]; }
	a[d]=sum;
	for(i=d;i<n;i++) {
	    a[i+1]=a[i]+sum; }
	if(n<d)
	printf("%d",a[n]);
	else if(n>=d && n<=30)
	printf("%d",a[n]);
	return 0; }