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
    int n,k,m,i,p;
     scanf("%d\n%d",&n,&k);
     for(m=0;m<n;m++) {
         scanf("%d",&arr[m]); }
     for(m=0;m<=n-k;m++)
    {for(i=m;i<=m+k-1;i++)
     p=getInversions(m,m+k-1);
     printf("%d\n",p);}
    return 0; }