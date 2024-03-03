#include <stdio.h>
int main() {
	int d,N,T=0,i,j,sum=0;
	scanf("%d %d",&d,&N);
	int b[d],a[N+1];
	for(i=0;i<d;i++)
	scanf("%d",&b[i]);
	for(i=0;i<d;i++)
	a[i]=b[i];
	for(i=0;i<d;i++)
	sum=sum+b[i];
	T=sum;
	for(i=d;i<=N;i++) {
	    T=T+sum;
	    sum=T; }
	printf("%d",sum);
	return 0; }