#include <stdio.h>
#include <stdlib.h>
int main() {int n;
    scanf("%d",&n);int t=(n-1)/2;int i,j,k;
    for(i=(n+1)/2;i>=1;i--)
    {for(k=t;k>=0;k--)
    {printf(" ");}
    for(j=i;j<=(n+1)/2;j++)
    {printf("%d",j);}
    t=t-1;printf("\n");}
    t=1;
    for(i=2;i<=(n+1)/2;i++)
    {for(k=1;k<=t;k++)
    {printf(" ");}
    for(j=i;j<=(n+1)/2;j++)
    {printf("%d",j);}
    t=t+1;printf("\n");}
	return 0; }