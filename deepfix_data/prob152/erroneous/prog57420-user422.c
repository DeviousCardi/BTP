#include <stdio.h>
int sum1=0,sum2=0,n,i;
int arr[30];
int SUM(arr[],int i){
   if(i==n){
       if(sum1==sum2)
       return 1;
       else
       return 0; }
   (sum1= arr[i])||(sum2=arr[i]);
   return SUM(arr,i+1); }
int main() {
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    SUM(arr,0) }