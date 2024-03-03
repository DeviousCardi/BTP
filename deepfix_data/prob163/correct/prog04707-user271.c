#include <stdio.h>
#include <stdlib.h>
int main() {   int i,j,n,m;
scanf("%d\n",&n);
scanf("%d\n",&m);
int a[n],k[n];
int b[m];
for(i=0;i<n;i++)
{  scanf("%d",&a[i]);}
for(i=0;i<m;i++)
{  scanf("%d",&b[i]);}
if(i<n-m)
printf("%d",a[i]);
for(i=n-1;i>=n-m;i--)
{j=(a[i]+b[i-(n-m)])%10;
if(i==n-1)
k[i]=j;
else
k[i]=j+(a[i]+b[i-(n-m)])/10;
if(i<n-m)
      printf("%d",k[i]); }
	return 0; }