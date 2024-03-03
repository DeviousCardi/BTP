#include <stdio.h>
int main() {
  int n,i,j,b,c,count=0;
  int d[10000];
  int a[10000];
  scanf("%d",&n);
  for (i=0;i<n;i++) {
      scanf("%d",&a[i]); }
  for(i=0;i<n;i++) {
      for(j=0;j<n;j++) {
         if(i!=j&&a[i]==a[j]) {
         b=a[i]; } } }
  printf("%d\n",b);
  for(i=0;i<n;i++) {
      d[i]=i+1; }
  for(i=0;i<n;i++) {
      for(j=0;j<n;j++) {
          if(d[i]==a[j])
          {count=count+1;
          break;} }
      if(count==0)
      printf("%d",d[i]); }
    return 0; }