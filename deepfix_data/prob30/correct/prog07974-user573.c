#include <stdio.h>
#include <limits.h>
int arr[100]={0};
int n;
int getMaxLessThan(int upperLimit) {
    int i,large;
    large=-1;
    for(i=0;i<n;i++) {
       if(i< upperLimit) {
       if(large<arr[i])
       large=arr[i]; } }
    return large; }
int main() {
    int n, k ;
    scanf("%d %d",&n,&k);
  for(int i=0;i<n;i++) {
      scanf("%d",&arr[i]); }
  for(int i=0;i<k;i++) {
      printf("%d",getMaxLessThan(i)); }
    return 0; }