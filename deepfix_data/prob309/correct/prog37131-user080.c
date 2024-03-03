#include <stdio.h>
int main() {
  int n,i,j,k,p,l,q=0;
  scanf("%d",&n);
  int a[n];
  int b[n];
  for(i=0;i<n;i=i+1) {
      scanf("%d",&a[i]); }
  for(j=0;j<n;j=j+1) {
      p=0;
      for(k=0;k<n;k=k+1) {
          if(a[j]==a[k]) {
              p=p+1;
              b[j]=p; } } }
  for(l=0;l<n;l=l+1) {
      if(a[l]==b[l]&&((l%2)==0)) {
          q=q+1; } }
  if(q==(n)) {
      printf("Yes"); }
  else {
      printf("No"); }
    return 0; }