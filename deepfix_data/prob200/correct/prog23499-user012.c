#include <stdio.h>
int arr[100]={0};
int n;
int getMaxLessThan(int upperLimit) {
    int t=0;
        for(int j=0;j<n;j++) {
            if(arr[j]<upperLimit&&arr[j]>t)
            t=arr[j]; }
        return t; }
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
      printf("%d\n",b[i]); }
    return 0; }