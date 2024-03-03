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
   int sumt=0;
    for(k=0;k<n;k++)
    sumt=sumt+sum[k];
    printf("%d\n",sumt);
    for (l=0;l<n;l++)
    printf("%d ",sum[l]);
	return 0; }