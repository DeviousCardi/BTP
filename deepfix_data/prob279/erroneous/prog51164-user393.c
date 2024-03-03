#include <stdio.h>
int main() {
  int n,i,j,b;
  int a[10000];
  scanf("%d",&n);
  for (i=0;i<n;i++) {
      scanf("%d",&a[i]); }
  for(i=0;i<n;i++) {
      for(j=0;j<n;j++) {
         if(i!=j&&a[i]==a[j]) {
         b=a[i]; } } }
  printf("%d/n",b);
  for(i=0;i<n;i++) {
      for(j=1;j<=n;j++) {
          if(a[i]=j)
          count=0;
          if(a[i]!=j)
          c=j; } }
  printf("%d",c);
    return 0; }