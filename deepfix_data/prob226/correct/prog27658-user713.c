#include <stdio.h>
int main() {
	int i,d,n,b[20],a[30],sum=0;
	scanf("%d%d",&d,&n);
	for(i=0;i<d;i++) {
	    scanf("%d",&b[i]); }
	for(i=0;i<d;i++) {
	    a[i]=b[i];
	    sum=sum+a[i]; }
	printf("%d",sum);
	for(i=d;i<n;i++) {
	    a[i]=a[i]+sum; }
	return 0; }