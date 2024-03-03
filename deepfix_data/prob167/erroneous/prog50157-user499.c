#include<stdio.h>
int sum(int arr[],int n);
int main() {
   int n,i,k;
   scanf("%d",&n);
   int arr[n];
   for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
   k=sum(arr,n-1);
   printf("%d",k);
    return 0; }
 int sum(int arr[],int n-1) {
     if(n==0) {
        return arr[0]; }
    return (arr[n-1]+sum(arr,n-2)); }