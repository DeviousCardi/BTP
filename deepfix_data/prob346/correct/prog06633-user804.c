#include <stdio.h>
int main(){
   int n,i,max,min,temp;
   int maxindex,minindex;
   scanf("%d",&n);
   int arr[n];
   for(i = 0;i<n;i++) {
       scanf("%d",&arr[i]); }
   max = arr[0];
   maxindex = 0;
   for(i = 1;i<n;i++) {
       if(max<arr[i]) {
           max = arr[i];
           maxindex=i; } }
      min = arr[0];
   minindex = 0;
   for(i = 1;i<n;i++) {
       if(min>arr[i]) {
           min = arr[i];
           minindex=i; } }
    arr[minindex]=max;
    arr[maxindex]=min;
      for(i = 0;i<n;i++) {
       printf("%d ",arr[i]); }
  printf(" end");
    return 0; }