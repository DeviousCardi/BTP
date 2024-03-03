#include <stdio.h>
int main() {
  int i,b,d,n;
  scanf("%d",&n);
  int array[n];
  for(i=0;i<n;i++)
  scanf("%d ",&array[i]);
  scanf("%d",&d);
  for(i=0;i<n;i++) {
      b=(i+d+1)%(n-1);
      array[i]=array[b]; }
  for(i=0;i<n;i++) {
      printf("%d",array[i]); }
    return 0; }