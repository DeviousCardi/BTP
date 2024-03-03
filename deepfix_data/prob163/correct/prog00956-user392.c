#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,n,m,sum=0;
	scanf("%d%d",&n,&m);
	int a[n];
	for(i=0;i<n;i++){
	    scanf("%c",&a[i]); }
	int b[m];
	for(i=0;i<m;i++){
	    scanf("%c",&b[i]); }
	sum= a[i]+b[i];
	printf("%c",sum);
	return 0; }