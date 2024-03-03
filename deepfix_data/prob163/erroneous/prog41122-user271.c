#include <stdio.h>
#include <stdlib.h>
int main() {   int i,j,n,m;
scanf("%d\n",&n);
scanf("%d\n",&m);
char a[n],k[n];
char b[m];
for(i=0;i<n;i++)
{  a[i]=getchar();}
for(i=0;i<m;i++)
{  b[i]=getchar();}
for(i=n-1;i>=n-m;i--)
{j=(a[i]+b[i-(n-m)])%10;
if(i==n-1)
{k[i]=j;
else
k[i]=j+(a[i]+b[i-(n-m)])/10; }
      printf("%d",k[i]); }
	return 0; }