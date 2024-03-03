#include<stdio.h>
#include<limits.h>
int main()
{int n,m,i,j,min;
int arr[1000];
int temp[1000];
for(i=0;i<m;i++)
arr[i]=0;
for(i=0;i<n;i++)
temp[j]=0;
scanf("%d",&n);
scanf("%d",&m);
for(i=0;i<m;i++)
{scanf("%d",&temp[0]);
arr[i]=temp[0];
    for(j=1;j<n;j++)
{scanf("%d",&temp[j]);
    if(temp[j]>arr[i])
    arr[i]=temp[j]; } }
for(i=0;i<m;i++)
printf("%d ",arr[i]);
min=arr[0];
for(i=1;i<m;i++)
{if(arr[i]<min)
 min=arr[i]; }
return 0; }