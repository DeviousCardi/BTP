#include <stdio.h>
int arr[100]={0};
int n;
int max=0;
int getMaxLessThan(int upperLimit) {
for(j=0;j<n;j++) {
 if(a[j]>=upperLimit)
 max=a[j];
 a[j]=0; }
    return max; }
int main() {
    int k,i;
  scanf("%d %d",&n,&k);
  for(i=0;i<n;i++)
  scanf("%d",&a[i]);
  for(i=0;i<n;i++) {
      if(a[i]>max)
      max=a[i]; }
  for(i=0;i<k;i++)
  printf("%d\n",getMaxLessThan(max));
    return 0; }