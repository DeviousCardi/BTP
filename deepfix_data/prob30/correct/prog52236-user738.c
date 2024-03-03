#include <stdio.h>
int arr[100]={0};
int n,i,k;
int getMaxLessThan(int upperLimit) {
    int temp;
    temp=arr[0];
     for(i=0;i<n;i++) {
         if(arr[i]>temp && temp<upperLimit) {
         temp=arr[i]; }
         else {
             continue; } }
     return temp; }
int main() {
    int l;
 scanf("%d",&n);
scanf("%d",&k);
for(i=0;i<n;i++) {
      scanf("%d",&arr[i]); }
  for(i=0;i<k;i++) {
    l=getMaxLessThan(100);
     int p=getMaxLessThan(l);
    printf("%d",p); }
    return 0; }