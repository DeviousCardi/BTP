#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,n,a[30];
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {scanf("%d",&a[i]); }
    for(i=0;i<=n;i++)
    {if(i==0)
    {if(a[i]<a[i+1])
    printf("yes\n"); }
    else if(i==n-1)
    {if(a[i]<a[i-1])
    printf("yes\n"); }
    else
    {if(a[i]<=a[i-1]&&a[i]<=a[i+1])
    printf("yes\n");
    else
    printf("no\n"); } }
	return 0; }