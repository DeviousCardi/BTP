#include <stdio.h>
int arr[100]={0};
int i,n,k;
scanf("%d",&n);
scanf("%d",&k);
for(i=0;i<n;i++) {
    i=i+1;
    scanf("%d",&arr[i]); }
int getMaxLessThan(int upperLimit) {
    int sum=0,i;
    for(i=0;i<n;i++) {
        sum= sum + arr[i]; }
    sum=sum-upperlimit; }
int main() {
    int b=0,i,m;
  for(i=0;i<n;i++) {
      if(arr[i]>b)
      b=arr[i]; }
  printf("%d",b);
    for(i=0;i<n;i++) {
        m=getMaxLessThan(b); }
    return 0; }