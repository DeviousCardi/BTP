#include <stdio.h>
#include <stdlib.h>
int main() { int n,i,k,j,t,a[n];
scanf("%d",&n);
for(i=0;i<n;i++)
{   scanf("%d\n",&a[i]);}
scanf("%d",&t);
for(k=0;k<t;k++)
{   scanf("%d\n",&j);
    if(j<=1)
    {if(a[j]>a[j+1])
    printf("Yes\n");
    else
    printf("No\n");}
else
   { if((a[j]>a[j+1])&&(a[j]>a[j-1]))
    printf("Yes\n");
    else
    printf("No\n");} }
	return 0; }