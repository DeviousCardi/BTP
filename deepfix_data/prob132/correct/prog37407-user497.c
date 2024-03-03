#include <stdio.h>
int main()
{ int i,n,j;
  scanf("%d",&n);
  int a[n];
  int count=0;
  int m=0;
  for(i=0;i<n;i++) {
      scanf("%d,",&a[i]); }
  for(i=0;i<n;i++)
  {  m=0;
      for(j=0;j<n;j++) {
          if(a[i]==a[j]) {
              m++; } }
     if(m!=a[i]+1)
     count=1; }
  if(count==0) {
      printf("Yes"); }
  else
  printf("No");
    return 0; }