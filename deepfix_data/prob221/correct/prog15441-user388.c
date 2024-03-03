#include <stdio.h>
#include <stdlib.h>
int main() {
int i,n,m,j,k;
scanf("%d %d",&n,&m);
for(i=1;i<=n;i++) {
if(i==1||i==n)
{for(j=1;j<=m;j++)
{printf("*");}
printf("\n"); }
else if(m=1)
{printf("*");}
else
{for(k=1;k<=m;k++)
{if(k==1||k==m)
{printf("*");} } } }
return 0; }