#include<stdio.h>
int arr[100];
int getInversions(int l,int r)
{int i,p,count=0;
  for(p=l;p<l+r-1;p++)
    {for(i=p+1;i<l+r;i++)
       { if(arr[p]>arr[i])
        count++;} }
    return count; }
int main()
{int n,k,j,max;
int countarr[100];
    scanf("%d",&n);
    scanf("%d",&k);
    for(j=0;j<n;j++)
    scanf("%d",&arr[j]);
    for(j=0;j<n;j++)
    countarr[j]=0;
    for(j=0;j<n-k+1;j++)
    countarr[j]=getInversions(j,k);
    max=countarr[0];
    for(j=1;j<n-k+1;j++)
    {if(countarr[j]>max)
        max=countarr[j]; }
printf("%d",max);
    return 0; }