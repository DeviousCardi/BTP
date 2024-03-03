#include <stdio.h>
int arr[100]={0};
int n;
int getMaxLessThan(int upperLimit) {
    int i;
    large=arr[0];
    for(i=0;i<n;i++) {
       if(large<arr[i])
       large=arr[i]; }
    return large; }
int main() {
  for(i=0;i<n;i++) {
      scanf("%d",&arr[i]); }
  for(i=n;i>k;i--) {
      a[i]= getMaxLessThan(arr);
      printf("%d",a[i]); }
    return 0; }