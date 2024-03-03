#include <stdio.h>
int arr[100]={0};
int n;
int getMaxLessThan(int upperLimit) {
    int t=0;
    int c[n];
    int i=0;
        for(int j=0;j<n;j++) {
            if(a[i]<upperLimit&&arr[i]>t)
            t=arr[i]; }
        t=c[i];
        i++; }
int main() {
  int k;
  scanf("%d%d",&n,&k);
  for(int i=0;i<n;i++)
  scanf("%d",&arr[i]);
  int max=arr[0];
  for(int i=0;i<n;i++) {
      if(arr[i]>max)
      max=arr[i]; }
  int b[n];
  for(int i=0;i<k;i++) {
      b[i]=getMaxLessThan(max);
      max=b[i];
      printf("%d",b[i]); }
    return 0; }