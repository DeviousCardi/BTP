#include <stdio.h>
int main() {
    int n,i,d;
    scanf("%d",&n);
    int ar[n];
    for(i=0;i<n;i++)
    scanf("%d",&ar[i]);
    scanf("%d",&d);
    for(i=0;i<n;i++) {
      if(i+d<n) {
          printf("%d",ar[i+d]); }
      else
      printf("%d",ar[n-i-d]); }
    return 0; }