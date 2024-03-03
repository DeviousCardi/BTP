#include <stdio.h>
#include <stdlib.h>
int main() {
int i,n,j;
scanf("%d",&n);
for(i=1;i<=n;i++) {
if(i==1||i==n)
{for(j=1;j<=n;j++)
{printf("*");}
printf("\n"); }
else
{printf("*   *\n");} }
return 0; }