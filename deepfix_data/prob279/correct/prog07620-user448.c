#include <stdio.h>
int main() {
    int i,n,j,count=0,sum=0;
    int a[1000];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]); }
  for (i=0;i<n;i++){
      for (j=0;j<n;j++){
          if (a[j]==a[i]){
              count++; } }
      if (count==a[i]+1){
          printf("%d",a[i]);
          printf("\n");
          break; } }
  for(j=0;j<n;j++){
      sum = sum+a[j]; }
  printf("%d",(n*(n+1))/2-(sum)+a[i]);
    return 0; }