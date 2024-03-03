#include <stdio.h>
int main() {
  int n,i,j;
  scanf("%d\n",&n);
  int ar[n];
  for(i=0;i<n;i++) {
      scanf("%d",&ar[i]); }
  for(i=0;i<n;i++) {
      for(j=i+1;j<n;j++) {
          if(ar[i]==ar[j]) {
              printf("%d\n",ar[i]);
              break; } } }
  for(i=0;i<n;i++) {
      for(j=1;j<=n;j++) {
         if(ar[i]==j) {
             break; } }
      if(ar[i]!=j) {
          printf("%d",j);
          break; } }
    return 0; }