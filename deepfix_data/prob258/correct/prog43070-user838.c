#include <stdio.h>
#include <stdlib.h>
int main() {
 int i,n,a[n];
 scanf("%d",&n);
 if(n==1) {
  printf("Yes");
  return 0; }
 scanf("%d",&a[0]);
 for(i=0;i<n;i++) {
    scanf("%d",&a[i]);
    if((a[i]>a[i-1])&&(a[i]>a[i+1])) {
      printf("Yes");
      return 0; } }
    printf("No");
    return 0; }