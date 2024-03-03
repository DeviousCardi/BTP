#include <stdio.h>
int main() {
	int d,N,T,x=0,i,j,sum=0;
	scanf("%d %d",&d,&N);
	int b[d],a[N+1];
	for(i=0;i<d;i++)
	scanf("%d",&b[i]);
	for(i=0;i<d;i++)
	a[i]=b[i];
	for(i=0;i<d;i++)
	sum=sum+b[i];
	if(N<d)
	{printf("%d",a[N]); }
	if(N>=d) {
	    for(i=d;i<N+1;i++) {
    a[i]=sum;
    sum+=a[i]; }
	printf("%d",a[N]); }
	return 0; }