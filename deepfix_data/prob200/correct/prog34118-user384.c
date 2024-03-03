#include <stdio.h>
int arr[100]={0};
int n,k;
int count=0;
int max(int t[],int m) {
    int M;
    M=t[0];
    for(int i=0;i<m;i++) {
        if(M<t[i])
        M=t[i]; }
    return M; }
int getMaxLessThan(int upperLimit) {
  if(count==k)
  return 0;
  for(int i=0;i<n;i++) {
      if(arr[i]==upperLimit) {
          printf("%d\n",arr[i]);
          arr[i]=0; } }
   count++;
   return getMaxLessThan(max(arr,n)); }
int main() {
   scanf("%d %d",&n,&k);
   for(int i=0;i<n;i++) {
       int c;
       scanf("%d",&c);
       arr[i]=c; }
   getMaxLessThan(max(arr,n));
    return 0; }