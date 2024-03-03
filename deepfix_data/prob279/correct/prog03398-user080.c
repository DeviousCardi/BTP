#include <stdio.h>
int main() {
  int i,n,j,k,l,m,o;
  scanf("%d",&n);
  int a[n];
  int b[n];
  for(i=0;i<n;i=i+1) {
      scanf("%d",&a[i]); }
  for(i=0;i<n;i=i+1) {
      b[i]=i+1; }
  for(j=0;j<n;j=j+1) {
      for(k=j+1;k<n;k=k+1) {
          if(a[j]==a[k]) {
              printf("%d\n",a[j]);
              break; } } }
  for(m=0;m<n;m=m+1)
  {l=0;
      for(o=0;o<n;o=o+1) {
          if(b[m]==a[o]) {
          l=l+1; } }
      if(l==0){printf("%d",b[m]);} }
    return 0; }