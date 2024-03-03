#include <stdio.h>
int main() {
    int i,n,j,m,count=0,sum=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]); }
  for (i=0;i<n;i++){
      if (a[i]==i+1){
          continue; }
      else {
          printf("%d",a[i]);
          printf("\n");
          break; } }
  for(j=0;j<n;j++){
      sum = sum+a[j]; }
  printf("%d",(n*(n+1))/2-(sum)+a[i]);
    return 0; }