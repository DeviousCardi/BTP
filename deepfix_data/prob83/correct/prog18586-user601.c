#include <stdio.h>
int main() {
  int n,i,d,c,j;
  scanf("%d",&n);
  int a[n];
  for(i=0;i<n;i++) {
      scanf("%d",&a[i]);
      printf("%d ",a[i]); }
  scanf("%d",&d);
printf("%d",n);
c=a[4];
    for(i=n-1;i>0;i--) {
      a[i]=a[i-1]; }
    printf("%d",c);
     a[0]=c;
  for(i=0;i<n;i++)
  printf("%d ",a[i]);
    return 0; }