#include <stdio.h>
int arr[100]={0};
int n,k;
int count=0;
int max(int t[],int m) {
    m=t[0];
    for(int i=0;i<m;i++) {
        if(m<a[i])
        m=a[i]; }
    return m; }
int getMaxLessThan(int upperLimit) {
  if(count==k)
  return 0;
  for(int i=0;i<n;i++) {
      if(arr[i]==upperLimit) {
          printf("%d\n",arr[i]);
          arr[i]=0; } }
   count++;
   return getMaxLessThan(max(arr[],n)) }
int main() {
    return 0; }