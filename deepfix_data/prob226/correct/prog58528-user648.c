#include <stdio.h>
int main() {
	int d,N,a[30],b[20],sum=0,i;
	scanf("%d %d",&d,&N);
	for(i=0;i<d;i++) {
	    scanf("%d",&b[i]);
	    sum=sum+b[i];
	    a[i]=b[i]; }
	a[d]=sum;
	sum=sum+a[d];
	for(i=d+1;i<=N;i++) {
	    a[i]=sum-a[i-d-1];
	    sum=sum+a[i]; }
	printf("%d",a[N]);
	return 0; }