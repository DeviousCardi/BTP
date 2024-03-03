#include<stdio.h>
int arr[100];
int getInversions(int l,int r)
{   int count=0;
    for(int i=0;i<r;i++) {
        for(int j=i+1;j<r;j++) {
            if(arr[l+i]<arr[l+j])
            count=count+1; } }
       return count; }
int max(int a,int b) {
        if(a>=b)
        return a;
        if(a<b)
        return b; }
int main() {
   int n;
   scanf("%d %d",&n,&r);
   arr[n];
   for(i=0;i<n;i++)
   scanf("%d",&a[i]);
   for(l=0;l<n-r;l++)
   int getInversions(int l,int r);
   m =max(count)
   return 0; }