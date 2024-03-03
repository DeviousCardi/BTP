#include <stdio.h>
#include <stdlib.h>
int main() {int n;
    scanf("%d",&n);
    int t=0;int i,j,k;
	for(i=n;i>=1;i=i-2) {
	    for(k=1;k<=t;k++)
	    {printf(" ");}
	    for(j=1;j<=i;j++)
	{printf("*");}
	t=t+1;
	    printf("\n"); }
	 t=(n-3)/2;
	for(i=3;i<=n;i=i+2) {
	    for(k=t;k>=1;k--)
	    {printf(" ");}
	    for(j=1;j<=i;j++)
	{printf("*");}
	t=t-1;
	    printf("\n"); }
	return 0; }