#include <stdio.h>
#include <stdlib.h>
int main() {   int i,n,m;
scanf("%d\n",&n);
scanf("%d\n",&m);
int a[n],k[n];
int b[m];
for(i=0;i<n;i++)
{  scanf("%d",&a[i]);}
for(i=0;i<m;i++)
{  scanf("%d",&b[i]);}
for(i=n-1;i>=n-m;i--)
{k[i]=(a[i]+b[i-(n-m)]);
 k[i-1]=((a[i]+b[i-(n-m)])/10)+k[i-1];
      printf("%d\n",k[i]); }
	return 0; }