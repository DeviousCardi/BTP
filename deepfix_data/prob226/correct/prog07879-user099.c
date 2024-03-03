#include <stdio.h>
int ans(int a[],int sum[],int d,int n) {
	a[n]=sum[n-1]-sum[n-d-1];
	sum[n]=sum[n-1]+a[n];
	return a[n]; }
int main() {
	int d,n,i;
	scanf("%d %d\n",&d,&n);
	int N=d>n?d:n;
	int a[N+1];
	if(n<d) {
		for(i=0;i<=n;i++) scanf("%d ",&a[i]);
		printf("%d",a[n]);
		return 0; }
	for(i=0;i<d;i++) scanf("%d ",&a[i]);
	int sum[N+1];
	sum[0]=a[0];
	for(i=1;i<d;i++) sum[i]=sum[i-1]+a[i];
	a[d]=sum[d-1];
	sum[d]=sum[d-1]+a[d];
	for(i=d+1;i<=n;i++) a[i]=ans(a,sum,d,i);
    for(int k=0;k<=n;k++) {printf("%d %d\n",a[k],sum[k]);}
	printf("%d",a[n]);
	return 0; }