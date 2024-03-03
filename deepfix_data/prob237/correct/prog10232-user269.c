#include<stdio.h>
int arr[100];
int getInversions(int l,int r)
{int i,j,count=0;
    for(i=l;i<l+r;i++) {
         for(j=i+1;j<l+r;j++) {
             if(arr[i]>arr[j])
              count++; } }
    return count; }
int main() {
    int n,k,i,p;
     scanf("%d\n%d",&n,&k);
     for(i=0;i<n;i++) {
         scanf("%d",&arr[i]); }
     for(i=0;i<=n-k+1;i++)
    {int p=getInversions(i,i+k-1);
     printf("%d\n",p);}
    return 0; }