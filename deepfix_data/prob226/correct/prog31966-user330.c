#include <stdio.h>
int main() {
	int d,n,i,sum=0,c=0,e=0;
	scanf("%d%d",&d,&n);
	int a[n+1];
	for(i=0;i<=d-1;i++){
	    scanf("%d",&a[i]);
	    sum=sum+a[i]; }
	for(i=d;i<=n;i++){
	    a[i]=sum+c-e;
	    c=a[i];
	    e=a[i-d]; }
	printf("%d",a[n]);
	return 0; }