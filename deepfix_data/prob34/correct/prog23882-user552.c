#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,n,j,t,k;
    scanf("%d\n",&n);
    int a[20];
    for(i=0;i<=n;i++)
{    scanf("%d\n",&a[i]);}
    scanf("%d\n",&t);
    int b[20];
    for(k=0;k<=t;k++)
   { scanf("%d\n",&b[k]);}
     for(j=0;j<=t;j++)
{   if((a[b[j]]>=a[b[j]+1])&&(a[b[j]]>=a[b[j]-1]))
     {printf("Yes\n");}
    else
    {printf("No\n");}}
	return 0; }