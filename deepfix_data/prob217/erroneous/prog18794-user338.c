#include <stdio.h>
#include <stdlib.h>
int main() {
int n,s,i,j;
int a[n];
scanf("%d\n",&n);
for(i=0;i<n;i++)
{scanf("%d\n",&a[i]);}
scanf("%d\n",&s);
for(i=0;i<n;i++) {
    if(s==a[i]+a[i])
    {printf("(%d,%d)",a[i],a[]);}
    else
    printf(" ");
    break; }
	return 0; }