#include <stdio.h>
int main() {
  char c;
  int n,i,p,j;
  scanf("%d\n",&n);
  int a[n];
  for(i=0;i<n;i++) {
  scanf("%d",&a[i]);
  scanf("%c",&c); }
  for(i=0;i<n;i++)
  printf("%d ",a[i]);
  for(i=0;i<n;i++) {
      int count=0;
      p=a[i];
     for(j=0;j<n;j++) {
         if(a[j]==p)
         count++; }
     if(count!=p) {
         printf("No");
         break; } }
  if(i==n-1)
  printf("Yes");
    return 0; }