#include <stdio.h>
int main() {
  int i,b,d,n;
  scanf("%d",&n);
  int array[n],barray[n];
  for(i=0;i<n;i++)
  scanf("%d ",&array[i]);
  scanf("%d",&d);
  for(i=0;i<n;i++) {
      b=(i+d+1)%(n);
      barray[i]=array[b]; }
  for (i=0;i<n;i++)
  printf("%d",barray[i]);
    return 0; }