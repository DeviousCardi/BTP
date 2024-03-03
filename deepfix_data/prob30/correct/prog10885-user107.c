#include <stdio.h>
int arr[100]={0};
int n,i,j,temp;
int getMaxLessThan(int upperLimit) {
    int i,j;
   for(i=0;i<n;i++) {
       for(j=0;j<n;j++) {
         if(arr[i]>arr[j] &&arr[i]<=upperLimit) {
         temp=arr[i];
         arr[i]=arr[j];
         arr[j]=temp; } } }
   return arr[i]; }
int main() {
  int k;
  scanf("%d",&n);
  scanf("%d",&k);
  for(i=0;i<n;i++) {
      scanf("%d",&arr[i]); }
  i=n-1;
  for(j=k;j>0;j--) {
  getMaxLessThan(1000);
  printf("%d\n",arr[n-1-i]);
  i=i-1; }
    return 0; }