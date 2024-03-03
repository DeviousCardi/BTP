#include <stdio.h>
#include <stdlib.h>
int main() {
int n,s,i,j;
int a[n];
scanf("%d%d",&n,&s);
for(i=0;i<n;i++)
{scanf("%d",&a[i]);}
for(j=0;j<n;j++)
{scanf("%d",&a[j]);}
for(i=0;i<n;i++)
for(j=0;j<n;j++) {
    if(s=a[i]+a[j])
    {printf("%d%d",a[i],a[j]);}
    else
    printf("no output"); }
	return 0; }