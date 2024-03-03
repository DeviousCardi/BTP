#include<stdio.h>
int count[100];
int arr[100];
int getInversions(int l,int r)
{int i;
    for(i=l+1;i<r;j++)
       { if(seq[l]>seq[i])
        count++;}
    count[l]=count; }
int main()
{int n,k,j;
    scanf("%d",&n);
    scanf("%d",&k);
    for(j=0;j<n;j++)
    scanf("%d",&arr[j]);
    for(j=0;j<n;j++)
    count[j]=0;
    for(j=0;j<n-k+1;j++)
    getInversions(j,k);
for(j=0;j<n;j++)
printf("%d",arr[100]);
    return 0; }