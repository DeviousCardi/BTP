#include <stdio.h>
int arr[100]={0};
int n;
int getMaxLessThan(int upperLimit) {
int i,m=0;
for(i=0;i<n;i++) {
    if(arr[i]>m&&arr[i]<upperLimit) {
        m=arr[i]; } }
return m; }
int main() {
  int k,m=0,i,c;
  scanf("%d%d",&n,&k);
  for(i=0;i<n;i++) {
      scanf("%d",&arr[i]); }
  for(i=0;i<n;i++) {
      if(m<arr[i]) {
          m=arr[i]; } }
  c=m;
  for(i=1;i<=k;i++) {
  printf("%d\n",c);
  c=getMaxLessThan(c); }
    return 0; }