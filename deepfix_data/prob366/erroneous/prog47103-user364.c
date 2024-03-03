#include <stdio.h>
int main() {
  int n,min,count,i,j;
  int a[500];
  scanf("%d",&n);
  count=0;
  min=400;
  for(i=0i<n;i++) {
      scanf("%d",&a[i]); }
  for(i=0;i<n;i++) {
      for(j=i+1;j<n;j++) {
          if(a[i]==a[j]) {
              count=j-i; }
         else{continue;} }
    if(min>count)
    {min=count;}
    count=0; }
    printf("%d",&min);
    return 0; }