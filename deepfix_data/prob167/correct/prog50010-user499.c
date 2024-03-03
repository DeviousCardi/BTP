#include<stdio.h>
int sum(int arr[],int n);
int main() {
   int n,i,k;
   scanf("%d",&n);
   int arr[n];
   for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
   k=sum(arr,n);
   printf("%d",k);
    return 0; }
 int sum(int arr[],int n) {
     int am=0,i;
     int k=arr[0];
     for(i=0;i<n;i++)
     am=k+sum(arr[i],n);
     return am; }