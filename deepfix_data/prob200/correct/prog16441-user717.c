#include <stdio.h>
int arr[100]={0};
int n;
int max=0;
int getMaxLessThan(int upperLimit) {
    int j;
for(j=0;j<n;j++) {
 if(arr[j]>=upperLimit) {
 max=arr[j];
 arr[j]=0;
 break; } }
    return max; }
int main() {
    int k,i;
  scanf("%d %d",&n,&k);
  for(i=0;i<n;i++)
  scanf("%d",&arr[i]);
  for(i=0;i<n;i++) {
      if(arr[i]>max)
      max=arr[i]; }
  for(i=0;i<k;i++)
  printf("%d\n",getMaxLessThan(max));
    return 0; }