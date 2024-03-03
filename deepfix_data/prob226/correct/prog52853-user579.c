#include <stdio.h>
int main() {
	int d,N,i,j;
	scanf("%d %d",&d,&N);
	int b[d+1],a[N+1];
	for(i=0;i<d;i++)
	scanf("%d",&b[i]);
	for(i=0;i<d;i++)
	a[i]=b[i];
	if(i>d)
	{   a[i]=0;
	    for(j=1;j<=d;j++)
	    a[i]=a[i]+a[i-j]; }
	return 0; }