#include <stdio.h>
int arr[100]={0};
int n;
int getMaxLessThan(int upperLimit) {
int j;min=MAX_INT;
for(j=0;j<n;j++){
    diff=upperlimit-arr[j];
    if(min>diff){
        min=diff; } } }
int main() {
  int k;
  scanf("%d %d\n",&n,&k);
  int i,j,max=0;
  for(i=0;i<n;i++){
      scanf("%d",&arr[i]);
      if(max<arr[i]) max=arr[i]; }
  for(j=0;j<k;j++){
      int x=getMaxLessThan(max);
      max=x;
      printf("%d\n",x); }
    return 0; }