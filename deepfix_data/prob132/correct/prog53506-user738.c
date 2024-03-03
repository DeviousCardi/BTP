#include <stdio.h>
int main() {
  int n;
  scanf("%d",&n);
  int i,a[n+1],freq[1000]={0};
  for(i=0;i<n;i++) {
      scanf("%d",&a[i]); }
  for(i=0;i<n;i++) {
      freq[a[i]]++; }
  for(i=0;i<1000;i++) {
      if(freq[i]!=0) {
          printf(" %d %d\n",i,freq[i]); } } }