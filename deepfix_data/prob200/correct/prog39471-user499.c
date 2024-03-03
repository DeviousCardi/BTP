#include <stdio.h>
int arr[100]={0};
int n;
int getMaxLessThan(int arr[],int n) {
    int temp;
    for(int j=0;j<n;j++)
    { for(int i=0;i<n-1;i++) {
        if(arr[i+1]>arr[i]) {
            temp=arr[i+1];
            arr[i+1]=arr[i];
            arr[i]=temp; } } } }
int main() {
  int n,k;
  scanf("%d%d",&n,&k);
  int arr[n];
  for(int i=0;i<n;i++) {
      scanf("%d",&arr[i]); }
  getMaxLessThan(arr,n);
    return 0; }