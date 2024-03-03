#include <stdio.h>
int main() {
	int d,N,sum=0;
	scanf("%d",&d,&N);
	int a[N],b[d];
	for(i=0;i<d;i++) {
	    scanf("%d",&b[i]);
	    a[i]=b[i];
	    sum=sum+b[i]; }
	if(N>=d){
	for(i=d;i<N;i++) {
	    a[i]=sum;
	    sum=sum-a[i-d]+a[i-1]; } }
	printf("%d",a[N-1]);
	return 0; }