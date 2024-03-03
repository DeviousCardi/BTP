#include <stdio.h>
int arr[100]={0};
int n,i,j,temp;
int getMaxLessThan(int upperLimit) {
   for(i=0;i<n;i++) {
       for(j=0;j<n;j++) {
         if(arr[i]>arr[j] &&arr[i]<=upperLimit)
         temp=arr[i];
         arr[i]=arr[j];
         arr[j]=temp; } }
   return arr[i]; }
int main() {
  int k;
  scanf("%d",&n);
  scanf("%d",&k);
  for(i=0;i<n;i++) {
      scanf("%d",&arr[i]); }
  for(i=k;i>0;i--) {
  getMaxLessThan(1000);
  printf("%d",getMaxLessThan); }
    return 0; }