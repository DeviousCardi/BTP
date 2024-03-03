#include <stdio.h>
int main() {
	int n,d,sum=0;
	scanf("%d %d",&n,&d);
	int a[n];
	for(int i=0;i<n;i++){
	    scanf("%d ",&a[i]); }
	for(int j=d;j<d-n;j++){
	    sum=sum+a[j]; }
	printf("%d",sum);
	return 0; }