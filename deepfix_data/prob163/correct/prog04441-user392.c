#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,n,m,sum=0;
	scanf("%llf%llf",&n,&m);
	int a[n];
	for(i=0;i<n;i++){
	    scanf("llf",&a[i]); }
	int b[m];
	for(i=0;i<m;i++){
	    scanf("%llf",&b[i]); }
	sum= a[i]+b[i];
	printf("%llf",sum);
	return 0; }