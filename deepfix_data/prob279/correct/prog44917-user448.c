#include <stdio.h>
int main() {
    int i,n,j,m,count=0,sum=0;
    int a[100];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]); }
  for (i=0;i<n;i++){
      a[i]=m;
      for (j=0;j<n;j++){
          if (a[j]==a[i]){
              count++; } }
      if (count==a[i]+1){
          printf("%d",a[i]);
          printf("\n");
          break; } }
  for(j=0;j<n;j++){
      sum = sum+a[j]; }
  printf("%d",(n*(n+1))/2-(sum)+m);
    return 0; }