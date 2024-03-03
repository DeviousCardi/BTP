#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,a[10000],i,value;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	scanf("%d",value);
	a[i]=value;
	if(a[0]==a[1])
	printf("%d",a[0]);
	return 0; }