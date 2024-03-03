#include <stdio.h>
#include <stdlib.h>
int main() {
int n,s,i;
int a[n];
scanf("%d%d",&n,&s);
for(i=0;i<n;i++)
{scanf("%d",&a[i]);}
for(i=0;i<n;i++) {
    if(s==a[i]+a[i])
    {printf("%d%d",a[i],a[i]);}
    else
    printf(" ");
    break; }
	return 0; }