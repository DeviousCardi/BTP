#include <stdio.h>
int arr[100]={0};
int n;
int getMaxLessThan(int upperLimit) {
     int max=0;
     for(int i=0;i<n;i++) {
         if(arr[i]>max && max<upperLimit)
            max=arr[i];
            printf("%d ",max); }
     return max; }
int main() {
  int k,i,max=0;
  scanf("%d %d",&n,&k);
  for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
  for(i=0;i<n;i++) {
      if(max<arr[i])
            max=arr[i]; }
  printf("%d\n",max);
  for(i=0;i<k;i++) {
      max=getMaxLessThan(max);
      printf("%d\n",max); }
    return 0; }