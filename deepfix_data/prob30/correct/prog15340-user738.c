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
    l=getMaxLessThan(100);
    printf("%d ",l);
       l=getMaxLessThan(100);
    return 0; }