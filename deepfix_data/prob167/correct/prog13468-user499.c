#include<stdio.h>
int sum(int arr[],int m);
int main() {
   int n,i,k;
   scanf("%d",&n);
   int arr[n];
   for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
   k=sum(arr,n);
   printf("%d",k);
    return 0; }
 int sum(int arr[],int m) {
     int am=0;
     if(m<0) {
        return am; }
     else {
         am=am+arr[m]; }
     sum(arr,m-1); }