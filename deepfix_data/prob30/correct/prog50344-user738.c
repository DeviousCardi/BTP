#include <stdio.h>
int arr[100]={0};
int n,i,k;
int getMaxLessThan(int upperLimit) {
    int temp;
    arr[0]=temp;
     for(i=0;i<n;i++) {
         if(arr[i]>temp && temp<=upperLimit)
         temp=arr[i];
         else { } }
     return temp; }
int main() {
    int l;
 scanf("%d",&n);
scanf("%d",&k);
for(i=0;i<n;i++) {
      scanf("%d",&arr[i]); }
  for(i=0;i<n;i++) {
    l=getMaxLessThan(arr[i]);
    printf("%d",l); }
    return 0; }