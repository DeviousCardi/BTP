#include <stdio.h>
int arr[100]={0};
int n;
int getMaxLessThan(int upperLimit) {
    int t=0;
for(int i=0;i<n;i++) {
     if(arr[i]<upperLimit) {
         t=arr[i];
         if(t>max)
         max=t; } }
    return max; }
int main() {
    int k,i;
  scanf("%d %d",&n,&k);
  int t[k];
  for(i=0;i<k;i++) {
     t[i]=getMaxLessThan(101)
     printf("%d\n",t[i]); }
    return 0; }