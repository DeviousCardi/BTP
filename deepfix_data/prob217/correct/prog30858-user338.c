#include <stdio.h>
#include <stdlib.h>
int main() {
int n,s,i,j;
int a[n];
scanf("%d\n",&n);
for(i=0;i<=j;i++)
for(j=i;j<n;j++)
{scanf("%d%d\n",&a[i],&a[j]);}
scanf("%d\n",&s);
for(i=0;i<=j;i++)
{for(j=i;j<n;j++) {
    if(s==a[i]+a[j])
    {printf("(%d,%d)",a[i],a[j]);}
    else
    printf(" ");
    break; } }
	return 0; }