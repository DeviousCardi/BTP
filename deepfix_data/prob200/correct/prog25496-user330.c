#include <stdio.h>
int arr[100]={0};
int n,k,i,j;
int getMaxLessThan(int upperLimit) {
   for(i=0;;i++){
       if(arr[i]==upperLimit){
           arr[i]=0;break; } }
   i=0;
   for(j=0;j<=n-1;j++){
       if(i<arr[j])i=arr[j]; }
   return i; }
int main() {
  int d=0;
    scanf("%d%d",&n,&k);
  for(i=0;i<=n-1;i++){
      scanf("%d",&arr[i]); }
    for(i=0;i<=n-1;i++){
      if(d<arr[i])d=arr[i]; }
    printf("%d\n",d);
  for(i=1;i<k-1;i++){
      d=getMaxLessThan(d);
      printf("%d\n",d); }
    return 0; }