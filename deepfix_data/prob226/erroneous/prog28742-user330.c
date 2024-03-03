#include <stdio.h>
int main() {
	int d,n,sum=0,c=0,d=0;
	scanf("%d%d",&d,&n);
	int a[n+1];
	for(i=0;i<=d-1;i++){
	    scanf("%d",&a[i]);
	    sum=sum+a[i]; }
	for(i=d;i<=n;i++){
	    a[i]=sum+c-d;
	    c=a[i];
	    d=a[i-d]; }
	print("%d",a[n]);
	return 0; }