#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,n,p=1,a[30];
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {scanf("%d",&a[i]); }
    for(i=0;i<=n;i++)
    {if(i==0)
    {if(a[i]>a[i+1])
    p=0; }
    else if(i==n-1)
    {if(a[i]>a[i-1])
    p=0; }
    else
    {if(a[i]>a[i-1]||a[i]>a[i+1])
    {p=0;}
}}
if(p)
printf("yes\n");
else
printf("no\n");
	return 0; }