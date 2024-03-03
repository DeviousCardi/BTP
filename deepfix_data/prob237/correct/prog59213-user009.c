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
{int n,k,j,val,max;
    scanf("%d",&n);
    scanf("%d",&k);
    for(j=0;j<n;j++)
    scanf("%d",&arr[j]);
    max=getInversions(0,k);
    for(j=1;j<n-k+1;j++)
    {val=getInversions(j,k);
    if(val>max)
    max=val; }
printf("%d",max);
    return 0; }