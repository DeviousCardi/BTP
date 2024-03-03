#include <stdio.h>
int main() {
	int d,n,a[30],sum=0;
	scanf("%d %d",&d,&n);
	for(i=0;i<d;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++){
	   sum=sum+a[i]; }
	printf("%d",sum);
	return 0; }