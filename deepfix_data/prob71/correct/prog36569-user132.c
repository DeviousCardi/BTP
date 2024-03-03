#include <stdio.h>
int main() {
  int n;
  scanf("%d",&n);
  int arr[n];
  for(int i=0;i<n;i=i+1)
  scanf("%d",&arr[i]);
  for(int i=0;i<n-1;i=i+1) {
      for(int j=i+1;j<n;j=j+1) {
          if(arr[i]>arr[j]) {
              int t;
              t=arr[i];
              arr[i]=arr[j];
              arr[j]=t; } } }
  if(n%2==0) {
      float med;
      med=(arr[n/2]+arr[n/2+1])/2;
      printf("%.1f",med); }
  else {
     int med;
     med=arr[n/2];
     printf("%d",med); }
    return 0; }