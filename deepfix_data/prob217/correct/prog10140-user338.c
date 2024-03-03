#include <stdio.h>
#include <stdlib.h>
int main() {
int n,s,i,j;
int a[n];
scanf("%d\n",&n);
for(i=0;i<n;i++)
for(j=0;j<n;j++)
{scanf("%d%d\n",&a[i],&a[j]);}
scanf("%d\n",&s);
for(i=0;i<n;i++)
{for(j=0;j<n;j++) {
    if(s==a[i]+a[i])
    {printf("(%d,%d)",a[i],a[i]);}
    else
    printf(" ");
    break; } }
	return 0; }