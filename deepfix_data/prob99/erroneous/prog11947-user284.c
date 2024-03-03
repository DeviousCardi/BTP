#include<stdio.h>
int main() {
  int n,a[100],i,j,m=0;
  int b[100];
  scanf("%d",&n);
  for(i=0;i<n;i++) {
      scanf("%d",&a[i]);
      b[i]=0; }
  b[n-1]=1;
  for(i=n-2;i>=0;i--) {
      for(j=i;j=<n-1;j++) {
          if(a[j]>a[i]) {
              if((1+b[j])>b[i]) {
              b[i]=1+b[j]; } } } }
  for(i=0;i<n;i++) {
      if(b[i]>m) {
          m=b[i]; } }
  printf("%d",m);
    return 0; }