#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,a[10000],i,value;
	scanf("%d",&n);
	if(n==1)
	printf("1");
	else {
	scanf("%d",&value);
	for(i=1;i<=n;i++)
	a[i]=value; }
	if(a[1]==a[2])
	printf("%d",a[1]);
	return 0; }