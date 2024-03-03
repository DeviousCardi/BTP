#include <stdio.h>
int main()
{ int i,n,j;
  scanf("%d",&n);
  int a[n];
  int count=0;
  for(i=0;i<n;i++) {
      scanf("%d,",&a[i]); }
  for(i=0;i<n;i++) {
      for(j=0;j<n;j++) {
          int m=0;
          if(a[i]==a[j]) {
              m++; }
          if(m!=a[i])
          {count=1;} } }
  if(count==0) {
      printf("yes"); }
  else
  printf("no");
    return 0; }