#include <stdio.h>
int main() {
  int i,n,flag=0,j;
  scanf("%d\n",&n);
  int a[n];
  for (i=0;i<n;i++) {
      scanf("%d,",&a[i]); }
  for (i=0;i<n;i++) {
      int count=0;
      int f=a[i];
      for (j=i+1;j<n;j++) {
          if (a[i]==a[j])
          count+=1; }
      if (count!=a[i])
      {flag=0;break;}
      if (flag==0)
      break; }
  if (flag==0)
  printf("No");
  else printf("Yes");
  return 0; }