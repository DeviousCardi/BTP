#include <stdio.h>
int arr[100]={0};
int n;
int getMaxLessThan(int upperLimit) {
   for(i=0;i<n;i++) {
       for(j=0;j<n;j++) {
       if(arr[i]<upperlimit&&arr[i]>arr[j])
       upperlimit=arr[i]; }
   return upperlimit; }
int main() {
  int k,upperlimit;
  scanf("%d",&n);
  scanf("%d",&k);
  for(i=0;i<n;i++) {
      scanf("%d",&arr[i]); }
  getMaxLessThan(100);
  printf("%d",upperlimit);
  getMaxLessThan(upperlimit);
    return 0; }