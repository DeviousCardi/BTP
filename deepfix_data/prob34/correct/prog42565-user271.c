#include <stdio.h>
#include <stdlib.h>
int main() { int n,i,j,a[n];
scanf("%d",&n);
for(i=0;i<n;i++)
{   scanf("%d",&j);
    j=a[i];
    if(a[i]<a[i+1])
    printf("Yes");
    else
    printf("No");
    printf("\n"); }
	return 0; }