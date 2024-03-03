#include <stdio.h>
#include <limits.h>
int arr[100]={0};
int n;
int getMaxLessThan(int upperLimit,int arr[100]) {
    int i=0,max=INT_MIN;
    for(;i<n-1;i++){
        if(arr[i]>max&&arr[i]<upperLimit)
            max=arr[i]; }
    return max; }
int main() {
  int k;
  scanf("%d%d",&n,&k);
  int i=0;
  for(;i<n;i++)
    scanf("%d",&arr[i]);
    int max2=INT_MAX;
    for(i=0;i<k;i++){
        int max=getMaxLessThan(max2,arr);
        printf("%d",max);
        max2=max; }
    return 0; }