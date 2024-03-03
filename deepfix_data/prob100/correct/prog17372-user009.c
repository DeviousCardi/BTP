#include<stdio.h>
#include<limits.h>
int main()
{int n,m,i,j,arr[100],temp[100],min;
scanf("%d %d",n,m);
for(i=0;i<m;i++)
{scanf("%d",temp[0]);
arr[i]=temp[0];
    for(j=1;j<n;j++)
{scanf("%d",temp[j]);
    if(temp[j]>arr[i])
    arr[i]=temp[j]; } }
min=arr[0];
for(i=1;i<n;i++)
{if(arr[i]<min)
 min=arr[i]; }
printf("%d",min);
return 0; }