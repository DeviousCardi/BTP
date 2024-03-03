#include <stdio.h>
int main() {
	int d,N,a[30],b[20],sum=0,i;
	scanf("%d %d",&d,&N);
	for(i=0;i<d;i++) {
	    scanf("%d",&b[i]);
	    sum=sum+b[i];
	    a[i]=b[i]; }
	for(i=d;i<=N;i++) {
	    a[i]=sum;
	    sum=sum+a[i]; }
	printf("%d",sum);
	return 0; }