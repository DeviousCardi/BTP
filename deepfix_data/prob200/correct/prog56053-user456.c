#include <stdio.h>
int arr[100]={0};
int n;
int getMaxLessThan(int arr[n],int upperLimit) {
    int max=0,i;
    for(i=0;i<n;i++) {
        if(max<arr[i]&&arr[i]<=upperLimit)
        max=arr[i]; }
    return max; }
int main() {
  int k,i,j,temp=0;
  scanf("%d %d\n",&n,&k);
  for(i=0;i<n;i++) {
      scanf("%d ",&arr[i]); }
  for(i=0;i<n;i++) {
      for(j=i+1;j<n;j++) {
          if(arr[j]<arr[i])
          temp=arr[j];
          arr[j]=arr[i];
          arr[i]=temp; } }
  for(i=0;i<k;i++) {
      printf("%d\n", getMaxLessThan(arr[n],arr[n-1-i])); }
    return 0; }