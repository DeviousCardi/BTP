#include <stdio.h>
int main() {
int d,n,i,j,sum=0;
scanf("%d%d",&d,&n);
int b[30],a[n+n];
for(i=0;i<d;i++)
{scanf("%d",&b[i]);
a[i]=b[i];}
for(i=d;i<=n;i=i+1)
{for(j=1;j<=d;j++)
{sum=sum+a[i-j];}
a[i]=sum;
sum=0;}
printf("%d",a[n]);
	return 0; }