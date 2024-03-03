#include <stdio.h>
int main() {
   int a,i,c,count=0;
   scanf("%d\n",&a);
      int arr[a];
   for(i=0;i<a;i++) {
       scanf("%d ",&arr[i]); }
   c=arr[0];
   for(i=1;i<(a-1);i++) {
       if(arr[i]>c&&arr[i]>arr[i+1]) {
          count=count+1; }
       c=arr[i]; }
   printf("%d",count);
    return 0; }