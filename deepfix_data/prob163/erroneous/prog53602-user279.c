#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,n,t,a[n],b[t]sum1=0,sum2=0;
	scanf("%lld",&n);
	scanf("%lld",&t);
	for(i=0;i<n;i++) {
	    scanf("%d",a[i]); }
	for(j=0;j<t;j++) {
	    scanf("%d",b[j]); }
	for(i=0;i<n;i++) {
	    sum1=sum1+(a[i])*(pow(10,n-1-i)); }
	for(j=0;j<t;j++) {
	    sum2=sum2+(b[t])*(pow(10,t-1-j)); }
	sum=sum1+sum2;
	printf("%d",sum);
	return 0; }