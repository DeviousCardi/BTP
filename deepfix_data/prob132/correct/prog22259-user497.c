#include <stdio.h>
int main()
{ int i,n,j;
  scanf("%d",&n);
  int a[n];
  int count=0;
  int m;
  for(i=0;i<n;i++) {
      scanf("%d,",&a[i]); }
  for(i=0;i<n;i++) {
      for(j=0;j<n;j++) {
          m=0;
          if(a[i]==a[j]) {
              m++; } }
     if((m-1)!=a[i])
    {count=1;} }
  if(count==0) {
      printf("Yes"); }
  else
  printf("No");
    return 0; }