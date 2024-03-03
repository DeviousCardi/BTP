#include <stdio.h>
#include <stdlib.h>
int main() { int n,t,i,j,k,l,a[n],b[t];
scanf("%d",&n);
for(i=0;i<n;i++)
{   scanf("%d",&j);
    j=a[i];
    if(a[i]<a[i+1])
    printf("Yes");
    else
    printf("No");
    printf("\n"); }
scanf("%d",&t);
for(k=0;k<t;k++)
{ scanf("%d",&l);
    l=b[k];
    if(b[k]<b[k+1])
    printf("Yes");
    else
    printf("No");
    printf("\n"); }
	return 0; }