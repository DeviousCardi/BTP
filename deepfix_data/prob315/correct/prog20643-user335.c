#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,i,j;
    scanf("%d",&n);
    int array[n],sum[n];
    for(i=0;i<n;i++)
    scanf("%d",&array[i]);
    for (i=0;i<n;i++)
    sum[i]=0;
    {for (j=i+1;j<n;j++)
     sum[i]=((array[i]>array[j])&&(j>i))+sum[i]; }
	return 0; }