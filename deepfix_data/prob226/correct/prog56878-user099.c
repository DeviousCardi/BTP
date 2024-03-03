#include <stdio.h>
int func(int a[],int sum[],int d,int n) {
    a[d]=sum[d-1];
    if(n>d) a[n]=sum[n-1]-sum[n-d-1];
    sum[n]=sum[n-1]+a[n];
    return a[n]; }
int main() {
	int d,n,i=0;
	scanf("%d %d\n",&d,&n);
	int N=n>d?n:d+1;
	int sum[N],a[N];
	for(i=0;i<d;i++) scanf("%d ",&a[i]);
	for(i=0;i<d;i++) sum[i]=sum[i-1]+a[i];
	if(n>=d) a[n]=func(a,sum,d,n);
	printf("%d",a[n]);
	return 0; }