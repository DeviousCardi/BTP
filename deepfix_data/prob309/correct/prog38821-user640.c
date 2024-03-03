#include <stdio.h>
int main() {
  int i,n,b,flag=2,count=0,j;
  scanf("%d\n",&n);
  int a[n];
  for (i=0;i<n;i++) {
      scanf("%d,",&a[i]); }
  for (j=0;j<n;j++) {
     for (i=0;i<n;i++) {
        if (a[i]>a[i+1]) {
          b=a[i];
          a[i]=a[i+1];
          a[i+1]=b; } } }
  for (i=0;i<n;i+=a[i]) {
    if (a[i]==a[i+1]) {
      count=0;
      for(j=i;j<i+a[i];j++) {
          if(a[j]==a[j+1])
          count+=1; }
      printf("%d ",count);
      if (count!=a[j]-1)
      {flag=0;break;} }
    if (flag==0)
    break; }
  if (flag==0)
  printf("No");
  else
  printf("Yes");
  return 0; }