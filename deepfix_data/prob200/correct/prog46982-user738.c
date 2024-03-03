#include <stdio.h>
int arr[100]={0};
int n;
int getmax(int a[],int n) {
    int temp,i;
    temp=0;
    for(i=0;i<n;i++) {
        if(a[i]>temp) {
            temp=a[i]; } }
    return temp; }
int getMaxLessThan(int upperLimit) {
   int i,temp=0;
   for(i=0;i<n;i++) {
      if(arr[i]>temp && arr[i]<=upperLimit) {
          temp = arr[i]; } }
   return temp; }
int main() {
  int k,i;
  scanf("%d %d",&n,&k);
  for(i=0;i<n;i++) {
      scanf("%d",&arr[i]); }
  int max=getmax(arr,n);
  for(i=0;i<k;i++) {
      getMaxLessThan(max);
      printf("%d",getMaxLessThan(max));
      max=getMaxLessThan(max); }
    return 0; }