#include<stdio.h>
int arr[100];
int getInversions(int l,int r)
{   int count=0;
    for(int i=l;i<l+r+1;i++) {
        for(int j=i+1;j<l+r+1;j++) {
            if(arr[i]>arr[j])
            count=count+1; } }
       return count; }
int main() {
   int n,r,l,m,count,maxi=0;
   scanf("%d %d",&n,&r);
   int arr[n];
   for(int i=0;i<n;i++)
   scanf("%d",&arr[i]);
   for(l=0;l<n-r+1;l++) {
       m=getInversions(l,r);
       printf("%d",m);
       if(maxi<m)
       maxi=m; }
   printf("%d",maxi);
   return 0; }