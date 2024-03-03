#include <stdio.h>
int main() {
  int n,min,count,i,j;
  int a[500];
  scanf("%d",&n);
  count=0;
  min=400;
  for(i=0;i<(2*n);i++) {
      scanf("%d",&a[i]); }
  for(i=0;i<(n);i++) {
      for(j=i;j<(2*n);j++) {
          if(a[i]==a[j]) {
              count=j-i; } }
    if(min>count)
    {min=count;}
    count=0; }
    printf("%d",min);
    return 0; }