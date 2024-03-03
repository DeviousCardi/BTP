#include <stdio.h>
int main(){
   int n,i,max,min,temp;
   int maxindex,minindex;
   scanf("%d",&n);
   int a[n];
   for(i = 0;i<n;i++) {
       scanf("%d",&a[i]); }
   max = a[0];
   maxindex = 0
   for(i = 1;i<n;i++) {
       if(max<arr[i]) {
           max = arr[i];
           maxindex=i; } }
      min = a[0];
   minindex = 0
   for(i = 1;i<n;i++) {
       if(min>arr[i]) {
           min = arr[i];
           minindex=i; } }
    a[minindex]=max;
    a[maxindex]=min;
      for(i = 0;i<n;i++) {
       printf("%d ",a[i]); }
    return 0; }