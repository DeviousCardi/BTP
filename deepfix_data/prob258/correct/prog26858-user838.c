#include <stdio.h>
#include <stdlib.h>
int main() {
 int i,n;
 scanf("%d",&n);
 int a[n];
 if(n==1) {
  printf("Yes");
  return 0; }
 for(i=0;i<n;i++) {
  scanf("%d",&a[i]); }
 for(i=1;i<n;i++) {
    if((a[i]>a[i-1])&&(a[i]>a[i+1])) {
      printf("Yes");
      return 0; } }
    if((a[n-1]>a[n-2])||(a[0]>a[1])) {
        printf("Yes"); }
    else
    printf("No");
    return 0; }