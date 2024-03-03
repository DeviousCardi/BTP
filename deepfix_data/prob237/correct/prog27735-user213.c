#include<stdio.h>
int arr[100];
int getInversions(int l,int r) {
int count=0;
for(int i=l;i<l+r-1;i++)
    {   for(int j=i+1;j<=l+r-1;j++)
        {   if((arr[i]>arr[j])&&(i<j))
            count++; } }
return count; }
int main()
{   int n,k,max;
    scanf("%d%d",&n,&k);
    if ((k<=n)&&(n<100)&&(n>0)&&(k>0))
     {  for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
        int inv[100];
        for(int i=0;i<=n-k;i++)
        inv[i]=getInversions(i,k);
        max=inv[0];
        for(int i=0;i<=n-k;i++)
        {   if(inv[i]>max)
                max=inv[i]; }
        printf("%d",max); }
    return 0; }