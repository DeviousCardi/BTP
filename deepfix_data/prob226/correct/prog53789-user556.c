#include <stdio.h>
int main() {
	int d,n;
	scanf("%d%d",&d,&n);int b[d],a[n+1],i,j,s=0;
	for(i=0;i<d;i++)
	scanf("%d",&b[i]);
	if(n+1<d)
	{for(i=0;i<=n;i++)
	a[i]=b[i]; }
	else {
	for(i=0;i<d;i++)
	a[i]=b[i];
	for(i=d;i<=n;i++)
	{s=0;
	       for(j=1;j<=d;j++)
	        s=s+a[i-j];
	    a[i]=s; } }
	printf("%d",a[n]);
	return 0; }