#include <stdio.h>
int arr[100]={0};
int n;
int getMaxLessThan(int upperLimit) {
    int t=0,max=0;
for(int i=0;i<n;i++) {
     if(arr[i]<upperLimit) {
         t=arr[i];
         if(t>max)
         max=t; } }
    return max; }
int main() {
    int k,i,val=1001;
  scanf("%d %d",&n,&k);
  int t[k];
  for(i=0;i<n;i++)
  scanf("%d",&arr[i]);
  for(i=0;i<k;i++) {
     t[i]=getMaxLessThan(val);
     val=t[i];
     printf("%d\n",t[i]); }
    return 0; }