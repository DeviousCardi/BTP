#include <stdio.h>
#include <stdlib.h>
int main() {
	  int k,n,i,j,g[20],e,p;
    int a[20];
    scanf("%d\n",&n);
    for(i=0;i<n;i++)
    {scanf("%d\n",&a[i]); }
    scanf("%d",&j);
    for(p=0;p<j;p++)
    {scanf("%d\n",&g[p]);}
    for(k=0;k<j;k++)
    {e=g[k];
    if(!(e==0||e==n-1))
    {if(a[e]<=a[e-1]&&a[e]<=a[e+1])
    printf("Yes\n");
    else
    printf("No\n");}
    if(e==n-1)
    {if(e==0)
    {if(a[0]<=a[1])
    printf("Yes\n");}
    else
    {if(a[e]<=a[e-1])
    printf("Yes\n");}}}
	return 0; }