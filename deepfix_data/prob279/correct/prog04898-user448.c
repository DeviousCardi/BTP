#include <stdio.h>
int main() {
    int i,n,j,m,count=0,sum=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]); }
  for (i=0;i<n;i++){
      for (j=0;j<n;j++){
          if (a[j]==a[i]){
              count++; } }
      if (count==a[i]+1){
          m=a[i];
          printf("%d",a[i]);
          printf("\n");
          break; }
      else {
          count=0; } }
  for(j=0;j<n;j++){
      sum = sum+a[j]; }
  printf("%d",(n*(n+1))/2-(sum)+m);
    return 0; }