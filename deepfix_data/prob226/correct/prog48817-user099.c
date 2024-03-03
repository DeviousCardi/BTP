#include <stdio.h>
int ans(int a[],int sum[],int d,int n) {
	a[n]=sum[n-1]-sum[n-d-1];
	sum[n]=sum[n-1]+a[n];
	return a[n]; }
int main() {
	int d,n,i;
	scanf("%d %d\n",&d,&n);
	int N=d>n?d:n;
	int a[N]; printf("%d ",N);
	if(n<d) {
		for(i=0;i<n;i++) {scanf("%d ",&a[i]); printf("%d ",a[i]);}
		printf("%d",a[n]);
		return 0; }
	else for(i=0;i<d;i++) scanf("%d ",&a[i]);
	int sum[N];
	sum[0]=a[0];
	for(i=1;i<d;i++) sum[i]=sum[i-1]+a[i];
	a[d]=sum[d-1];
	for(i=d+1;i<n;i++) a[i]=ans(a,sum,d,n);
	printf("%d",a[n]);
	return 0; }